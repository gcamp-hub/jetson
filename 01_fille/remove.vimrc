" Vimrc_Setup_List
" Update Date : 26th Feb 2018

" Color scheme (terminal)
set background=dark             " Display
" highlight Normal ctermfg=white ctermbg=black

" Text Editor
set autoindent                  " always set autoindenting on
set smartindent                 " do clever autoindenting
set cindent                     " enable specific indenting for C code
set number                      " always show line numbers
"set nonumber
set showmatch                   " when inserting a bracket, briefly jump to its match
set tabstop=4                   " number of spaces a <Tab> in the text stands for (local to buffer)
set shiftwidth=4                " number of spaces to use for autoindenting
set softtabstop=4               " when hitting <BS>, pretend like a tab is removed, even if spaces
set et
set sw=4
set smarttab                    " a <Tab> in an indent inserts 'shiftwidth' spaces
set expandtab                   " expand tabs by default (overloadable per file type later)
set paste                       " paste mode, insert typed text literally
set noshiftround                " oposite of round to 'shiftwidth' for << and >>
set copyindent                  " copy the previous indentation on autoindenting
set timeout timeoutlen=200 ttimeoutlen=100
set visualbell                  " don't beep
set noerrorbells                " don't beep
set autowrite                   " Save on buffer switch
set mouse=a                     " list of flags for using the mouse
set backspace=indent,eol,start  " allow backspacing over everything in insert mode
set nowrap                      " don't wrap lines
set tags=tags                   " list of file names to search for tags(global or local to buffer)

" Searching
nnoremap / /\v
vnoremap / /\v
set hlsearch                    " highlight all matches for the last used search pattern
set incsearch                   " show match for partly typed search command
set ignorecase                  " ignore case when searching
set smartcase                   " ignore case if search pattern is all lowercase
set showmatch                   " when inserting a bracket, briefly jump to its match
" Clear Search
map <leader><space> :let @/=''<cr>      

" Visualize tabs and newlines
set listchars=tab:▸\ ,eol:¬
" Uncomment this to enable by default:
" set list " To enable by default
" Or use your leader key + l to toggle on/off
map <leader>l :set list!<CR> " Toggle tabs and EOL

" Remap help key.
inoremap <F1> <ESC>:set invfullscreen<CR>a
nnoremap <F1> :set invfullscreen<CR>
vnoremap <F1> :set invfullscreen<CR>

set hidden              " Allow hidden buffers

" Last line
set showmode            " always show what mode we're currently editing in
set showcmd             " show (partial) command keys in the status line

set nocompatible        " Disable vi-compatibility
set history=256         " how many command lines are remembered
set ruler               " Show file stats
set nobackup
set title               " show info in the window title
set wmnu                " command-line completion shows a list of matches
set expandtab           " expand <Tab> to spaces in Insert mode
set syn=python          " name of syntax highlighting used (local to buffer)
set modelines=0         " Security
filetype off            " Helps force plugins to load correctly when it is turned back on below
"set spell              " highlight spelling mistakes (local to window)
set debug=              " Display Debugs
syntax enable           " name of syntax highlighting used
syntax on               " Turn on syntax highlighting
set encoding=utf-8      " Encoding

" Formatting
map <leader>q gqip

" Python Developer
map <f2> :!python2.7 
map <f3> :!python3.5 
map <f4> :!tensorboard --logdir=
map <F12> :!q!
map <F10> :!wq

"Easy escaping to normal model
imap jj <esc>

"easier window navigation
nmap <C-h> <C-w>h
nmap <C-j> <C-w>j
nmap <C-k> <C-w>k
nmap <C-l> <C-w>l
