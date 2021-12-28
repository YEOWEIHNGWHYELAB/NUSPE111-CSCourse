syntax on
set nocompatible
set backup
set backupdir=~/.backup
set autoindent
set smartindent
set wrap
set linebreak
filetype plugin indent on

" The following should give 16 colors
" set t_AB=[%?%p1%{8}%<%t%p1%{40}%+%e%p1%{92}%+%;%dm
" set t_AF=[%?%p1%{8}%<%t%p1%{30}%+%e%p1%{82}%+%;%dm
" set t_Co=16

" The following change the backspace
set t_kb=

autocmd FileType c setlocal shiftwidth=2 tabstop=2
set nowrap
set expandtab
set sw=2
