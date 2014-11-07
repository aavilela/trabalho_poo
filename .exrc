if &cp | set nocp | endif
noremap  :nohlsearch
nnoremap <silent>  :CtrlP
nmap ,v :tabedit $MYVIMRC
map Q gq
let s:cpo_save=&cpo
set cpo&vim
nmap gx <Plug>NetrwBrowseX
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#NetrwBrowseX(expand("<cWORD>"),0)
cmap  set nohlsearch
inoremap  :nohlsearch
inoremap  u
let &cpo=s:cpo_save
unlet s:cpo_save
set background=dark
set backspace=indent,eol,start
set backup
set backupdir=~/vimtmp
set directory=~/vimtmp
set fileencodings=ucs-bom,utf-8,default,latin1
set helplang=en
set history=50
set hlsearch
set incsearch
set listchars=tab:▸\ ,eol:¬
set mouse=a
set printoptions=paper:a4
set ruler
set runtimepath=~/.vim/bundle/,~/.vim/bundle/ctrlp.vim,~/.vim,~/.vim/bundle/autoload,~/.vim/bundle/vim-fugitive,/var/lib/vim/addons,/usr/share/vim/vimfiles,/usr/share/vim/vim74,/usr/share/vim/vimfiles/after,/var/lib/vim/addons/after,~/.vim/after
set showcmd
set suffixes=.bak,~,.swp,.o,.info,.aux,.log,.dvi,.bbl,.blg,.brf,.cb,.ind,.idx,.ilg,.inx,.out,.toc
set tags=./.tags
" vim: set ft=vim :
