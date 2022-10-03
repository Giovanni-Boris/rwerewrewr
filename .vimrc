
"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

"CONFIGURACIONES BASICAS 
set number 						"muestra los numeros de cada linea en la parte izquierda 
"set relativenumber 			"la distribucion de los numeros en lineas de manera relativa
set mouse=a 					"permite la interaccion con el mouse
set noshowmode					"me deja de mostrar el modo en el que estamos 'normal, insert, visual, etc'
syntax enable 					"activa el coloreado de sintaxis en algunos tipos de archivos como html, c, c++
set encoding=utf-8 			"permite setear la codificación de archivos para aceptar caracteres especiales
set sw=2 						"la indentación genera 4 espacios
set tabstop=2
set expandtab
set nowrap						"el texto en una linea no baja a la siguiente, solo continua en la misma hasta el infinito.
""set noswapfile				"para evitar el mensaje que sale al abrir algunos archivos sobre swap.
set clipboard=unnamed		"para poder utilizar el portapapeles del sistema operativo 'esto permite poder copiar y pegar desde cualquier parte a nvim y viceversa.	
"set numberwidth=
set showcmd
"set paste
set ruler
set laststatus=2
set t_Co=256
filetype indent on
set autoindent
set visualbell

"set splitbelow
set splitright					"file a la derecha
set ignorecase
set linebreak
set scrolloff=7				"20 lineas y no baja



set termguicolors 			"activa el true color en la terminal
"let g:lightline = {'colorscheme': 'dracula'}
nmap <space>1 :set bg=light<CR>
nmap <space>2 :set bg=dark<CR>

"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

" TextEdit might fail if hidden is not set.
set hidden

" Give more space for displaying messages.
set cmdheight=2

" Having longer updatetime (default is 4000 ms = 4 s) leads to noticeable
" delays and poor user experience.
"set updatetime=300

" Don't pass messages to |ins-completion-menu|.
set shortmess+=c

" Always show the signcolumn, otherwise it would shift the text each time
" diagnostics appear/become resolved.
if has("patch-8.1.1564")
  " Recently vim can merge signcolumn and number column into one
  set signcolumn=number
else
  set signcolumn=yes
endif

