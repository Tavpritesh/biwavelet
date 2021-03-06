% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/wtc.sig.R
\name{wtc.sig}
\alias{wtc.sig}
\title{Determine significance of wavelet coherence}
\usage{
wtc.sig(nrands = 300, lag1, dt, ntimesteps, pad = TRUE, dj = 1/12, s0, J1,
  max.scale = NULL, mother = "morlet", sig.level = 0.95, quiet = FALSE)
}
\arguments{
\item{nrands}{number of Monte Carlo randomizations. Default is 300.}

\item{lag1}{vector containing the AR(1) coefficient of each time series.}

\item{dt}{length of a time step.}

\item{ntimesteps}{number of time steps in time series.}

\item{pad}{pad the values will with zeros to increase the speed of the
transform. Default is \code{TRUE}.}

\item{dj}{spacing between successive scales. Default is 1/12.}

\item{s0}{smallest scale of the wavelet. Default is \code{2*dt}}

\item{J1}{number of scales - 1.}

\item{max.scale}{maximum scale}

\item{mother}{type of mother wavelet function to use. Can be set to
\code{morlet}, \code{dog}, or \code{paul}. Default is \code{morlet}.
Significance testing is only available for \code{morlet} wavelet.}

\item{sig.level}{significance level to compute. Default is \code{0.95}}

\item{quiet}{Do not display progress bar. Default is \code{FALSE}}
}
\value{
Returns significance matrix containing the \code{sig.level}
  percentile of wavelet coherence at each time step and scale.
}
\description{
Determine significance of wavelet coherence
}
\note{
The Monte Carlo randomizations can be extremely slow for large
  datasets. For instance, 1000 randomizations of a dataset consisting of 1000
  samples will take ~30 minutes on a 2.66 GHz dual-core Xeon processor.
}
\examples{
# Not run: wtcsig <- wtc.sig(nrands, lag1 = c(d1.ar1, d2.ar1), dt,
#                            pad, dj, J1, s0, mother = "morlet")

}
\author{
Tarik C. Gouhier (tarik.gouhier@gmail.com)

Code based on WTC MATLAB package written by Aslak Grinsted.
}
\references{
Cazelles, B., M. Chavez, D. Berteaux, F. Menard, J. O. Vik, S. Jenouvrier,
and N. C. Stenseth. 2008. Wavelet analysis of ecological time series.
\emph{Oecologia} 156:287-304.

Grinsted, A., J. C. Moore, and S. Jevrejeva. 2004. Application of the cross
wavelet transform and wavelet coherence to geophysical time series.
\emph{Nonlinear Processes in Geophysics} 11:561-566.

Torrence, C., and G. P. Compo. 1998. A Practical Guide to Wavelet Analysis.
\emph{Bulletin of the American Meteorological Society} 79:61-78.

Torrence, C., and P. J. Webster. 1998. The annual cycle of persistence in the
El Nino/Southern Oscillation. \emph{Quarterly Journal of the Royal
Meteorological Society} 124:1985-2004.
}

