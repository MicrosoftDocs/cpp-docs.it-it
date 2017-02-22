---
title: "Funzioni _spawn, _wspawn | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_spawn"
  - "_tspawnlp"
  - "_tspawnlpe"
  - "_tspawnve"
  - "_tspawnvp"
  - "_tspawnvpe"
  - "_tspawnl"
  - "spawn"
  - "_tspawnv"
  - "_tspawnle"
  - "wspawn"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tspawnve (funzione)"
  - "_spawn (funzioni)"
  - "_tspawnlpe (funzione)"
  - "tspawnvpe (funzione)"
  - "processi, creazione"
  - "tspawnve (funzione)"
  - "_tspawnvp (funzione)"
  - "spawn (funzioni)"
  - "tspawnl (funzione)"
  - "tspawnlp (funzione)"
  - "_tspawnvpe (funzione)"
  - "_tspawnl (funzione)"
  - "tspawnvp (funzione)"
  - "tspawnv (funzione)"
  - "processi, esecuzione di nuovi"
  - "_tspawnv (funzione)"
  - "tspawnle (funzione)"
  - "creazione di processi"
  - "_tspawnlp (funzione)"
  - "tspawnlpe (funzione)"
  - "_tspawnle (funzione)"
ms.assetid: bb47c703-5216-4e09-8023-8cf25bbf2cf9
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Funzioni _spawn, _wspawn
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ognuna delle funzioni `_spawn` crea ed esegue un nuovo processo:  
  
|||  
|-|-|  
|[\_spawnl, \_wspawnl](../c-runtime-library/reference/spawnl-wspawnl.md)|[\_spawnv, \_wspawnv](../c-runtime-library/reference/spawnv-wspawnv.md)|  
|[\_spawnle, \_wspawnle](../c-runtime-library/reference/spawnle-wspawnle.md)|[\_spawnve, \_wspawnve](../c-runtime-library/reference/spawnve-wspawnve.md)|  
|[\_spawnlp, \_wspawnlp](../c-runtime-library/reference/spawnlp-wspawnlp.md)|[\_spawnvp, \_wspawnvp](../c-runtime-library/reference/spawnvp-wspawnvp.md)|  
|[\_spawnlpe, \_wspawnlpe](../c-runtime-library/reference/spawnlpe-wspawnlpe.md)|[\_spawnvpe, \_wspawnvpe](../c-runtime-library/reference/spawnvpe-wspawnvpe.md)|  
  
 La lettera alla fine del nome della funzione identifica la modifica.  
  
 `e`  
 `envp`, array di puntatori alle impostazioni d'ambiente, che viene passato al nuovo processo.  
  
 `l`  
 Dalla riga di comando gli argomenti vengono passati singolarmente alla funzione `_spawn`.  Il suffisso viene utilizzato in genere quando una serie di parametri a un nuovo processo è noto in anticipo.  
  
 `p`  
 La variabile d'ambiente`PATH` viene utilizzata per cercare il file da eseguire.  
  
 `v`  
 `argv`, array di puntatori agli argomenti della riga di comando, viene passata alla funzione `_spawn`.  Il suffisso viene utilizzato in genere quando una serie di parametri a un nuovo processo è variabile.  
  
## Note  
 Le funzioni `_spawn` creano ed eseguono un nuovo processo.  Gestiscono automaticamente gli handle della stringa con caratteri multibyte in base alle proprie esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso.  Le funzioni `_wspawn` sono versioni a caratteri estesi delle funzioni di `_spawn` ; non gestiscono le stringhe di caratteri multibyte.  In caso contrario, le funzioni `_wspawn` si comportano in modo identico alle controparti di `_spawn`.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tspawnl`|`_spawnl`|`_spawnl`|`_wspawnl`|  
|`_tspawnle`|`_spawnle`|`_spawnle`|`_wspawnle`|  
|`_tspawnlp`|`_spawnlp`|`_spawnlp`|`_wspawnlp`|  
|`_tspawnlpe`|`_spawnlpe`|`_spawnlpe`|`_wspawnlpe`|  
|`_tspawnv`|`_spawnv`|`_spawnv`|`_wspawnv`|  
|`_tspawnve`|`_spawnve`|`_spawnve`|`_wspawnve`|  
|`_tspawnvp`|`_spawnvp`|`_spawnvp`|`_wspawnvp`|  
|`_tspawnvpe`|`_spawnvpe`|`_spawnvpe`|`_wspawnvpe`|  
  
 Memoria sufficiente deve essere disponibile per il caricamento e l'esecuzione di un nuovo processo.  L'argomento di `mode` determina le azioni eseguite dal processo chiamante prima e durante `_spawn`.  I valori seguenti per `mode` sono definiti in Process.h:  
  
 `_P_OVERLAY`  
 Sovrappone un processo di chiamata con un nuovo processo, distruggendo il processo di chiamata \(stesso effetto delle chiamate di `_exec` \).  
  
 `_P_WAIT`  
 Sospende un thread chiamante finché l'esecuzione del nuovo processo non sia completo \( `_spawn` sincrono\).  
  
 `_P_NOWAIT` o `_P_NOWAITO`  
 Continua ad eseguire un processo chiamante contemporaneamente al nuovo processo \( `_spawn` asincrono\).  
  
 `_P_DETACH`  
 Continua l'esecuzione del processo chiamante; il nuovo processo viene eseguito in background senza accesso alla console o alla tastiera.  Le chiamate a `_cwait` rispetto al nuovo processo falliscono \( `_spawn` asincrono\).  
  
 L'argomento `cmdname` specifica il file che viene eseguito come nuovo processo e può specificare un percorso completo \(dalla radice\), un percorso parziale \(dalla cartella di lavoro corrente\), o semplicemente un nome file.  Se `cmdname` non presenta un'estensione di file o non termina con un punto \(.\), la funzione `_spawn` innanzitutto prova l'estensione di file .com e l'estensione di file .exe, l'estensione di file bat e infine l'estensione di file con estensione .cmd.  
  
 Se `cmdname` ha un'estensione di file, solo tale estensione viene utilizzata.  Se `cmdname` termina con un punto, la funzione `_spawn` cerca `cmdname` senza estensione.  `_spawnlp`, `_spawnlpe`, `_spawnvp` e  `_spawnvpe` cercano `cmdname` \(utilizzando le stesse procedure\) nella directory specificata dalla variabile d'ambiente `PATH`.  
  
 Se `cmdname` contiene un identificatore di unità o delle barre \(ovvero se si tratta di un percorso relativo\), la chiamata a `_spawn` cerca soltanto il file specificato; il percorso non viene cercato.  
  
 In passato, alcune di queste funzioni `errno` impostavano zero su esito positivo; il comportamento corrente è non modificare il comportamento di `errno`, come specificato dallo standard C.  Se è necessario emulare il comportamento precedente, impostare `errno` su zero prima di chiamare queste funzioni.  
  
> [!NOTE]
>  Per garantire l'inizializzazione sovrapposta appropriata e la terminazione, non utilizzare la funzione di `longjmp` o di `setjmp` per immettere o lasciare in una routine sovrapposta.  
  
## Argomenti per il processo generato  
 Per passare argomenti al nuovo processo, specificare uno o più puntatori alle stringhe di caratteri come argomenti nella chiamata di `_spawn`.  Queste stringhe di caratteri formano una lista di argomenti per il processo generato.  La lunghezza combinata delle stringhe che compongono l'elenco di argomenti per il nuovo processo non deve superare i 1024 byte.  Il carattere di terminazione null \('\\0'\) per ogni stringa non è inclusa nel conteggio, ma i caratteri di spazio \(inseriti automaticamente per separare i parametri\) vengono inclusi.  
  
> [!NOTE]
>  Spazi incorporati nelle stringhe possono causare comportamenti imprevisti; ad esempio, passare a `_spawn` la stringa `"hi there"` comporterà la presenza di due argomenti nel nuovo processo, `"hi"` e `"there"`.  Se lo scopo era quello di far aprire al nuovo processo un file denominato "hi there", esso fallirà.  È possibile evitare tutto ciò inserendo la stringa tra apici doppi: `"\"hi there\""`.  
  
> [!IMPORTANT]
>  Non passare l'input di un utente a `_spawn` senza verificarne esplicitamente il contenuto.  `_spawn` determinerà una chiamata a [CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms682425) per cui è bene tenera a mente che nomi di percorsi non qualificati possono creare vulnerabilità a livello di sicurezza.  
  
 È possibile passare i puntatori dell'argomento come argomenti separati \(in `_spawnl`, in `_spawnle`, in `_spawnlp` e in `_spawnlpe`\) o come array di puntatori \(in `_spawnv`, in `_spawnve`, in `_spawnvp` e in `_spawnvpe`\).  È necessario passare almeno un argomento, `arg0` o `argv`\[0\], al processo generato.  Per convenzione, questo argomento è il nome del programma che si digiterebbe da riga di comando.  Un valore diverso non produce un errore.  
  
 Le chiamate `_spawnl`, `_spawnle`, `_spawnlp` e `_spawnlpe` in genere vengono utilizzati nei casi in cui il numero di argomenti è noto in anticipo.  L'argomento `arg0` è generalmente un puntatore a `cmdname`.  Gli argomenti da `arg1` a `argn` sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti.  Dopo `argn`, ci deve essere un puntatore `NULL` per contrassegnare la fine dell'elenco di argomenti.  
  
 Le chiamate `_spawnv`, `_spawnve`, `_spawnvp` e `_spawnvpe` sono utili quando esiste un numero variabile di argomenti al nuovo processo.  I puntatori agli argomenti vengono passati come array, `argv`*.* L'argomento `argv`\[0\] è in genere un puntatore a un percorso in modalità reale o al nome del programma in modalità protetta e `argv`\[1\] con `argv`\[`n`\] sono puntatori alle stringhe di caratteri che costituiscono il nuovo elenco di argomenti.  L'argomento `argv`\[`n` \+1\] deve essere un puntatore `NULL` per contrassegnare la fine dell'elenco di argomenti.  
  
## Ambiente del processo generato  
 I file che vengono aperti quando viene effettuata una chiamata a `_spawn` rimangono aperti nel nuovo processo.  Nelle chiamate a `_spawnl`, `_spawnlp`, `_spawnv` e `_spawnvp`, il nuovo processo eredita l'ambiente del processo chiamante.  È possibile utilizzare le chiamate `_spawnle`, `_spawnlpe`, `_spawnve` e `_spawnvpe` per modificare l'ambiente per il nuovo processo passando un elenco delle impostazioni di ambiente tramite l'argomento `envp`.  L'argomento `envp` è un array di puntatori a caratteri, ogni elemento dell'array \(ad eccezione dell'elemento finale\) punta alla stringa di terminazione null che definisce una variabile di ambiente.  Tale stringa in genere presenta il formato `NAME`\=`value` in cui `NAME` è il nome di una variabile d'ambiente e `value` è il valore stringa assunto dalla variabile. \(Si noti che `value` non è racchiuso tra apici doppi.\) L'elemento finale dell'array `envp` dovrebbe essere `NULL`.  Quando la stessa `envp` è `NULL`, il nuovo processo generato eredita le impostazioni d'ambiente del processo padre.  
  
 Le funzioni `_spawn` possono comunicare le informazioni sui file aperti, inclusa la modalità di traduzione, al nuovo processo.  Queste informazioni vengono passate in modalità reale tramite la voce `C_FILE_INFO` nell'ambiente.  Il codice di avvio in genere elabora questa voce e verrà eliminata dall'ambiente.  Tuttavia, se una funzione di `_spawn` genera un processo non C, questa voce rimane nell'ambiente.  La stampa dell'ambiente indica i caratteri grafici nella stringa di definizione per la voce poiché le informazioni sull'ambiente vengono passate in forma binaria in modalità reale.  Non può contenere qualsiasi altro effetto sulle normali operazioni.  In modalità protetta, le informazioni sull'ambiente vengono passate in forma di testo e pertanto non contengono caratteri grafici.  
  
 È necessario chiudere o effettuare in modo esplicito lo svuotamento del flusso \(utilizzando `fflush` o `_flushall`\) prima della chiamata di funzione `_spawn`.  
  
 I nuovi processi creati dalle chiamate alle routine di `_spawn` non mantengono le impostazioni del segnale.  Al contrario, i processi generali resettano le impostazioni del segnale ai valori predefiniti.  
  
## Reindirizzamento dell'output  
 Se si chiama `_spawn` da una DLL o da un'applicazione GUI e si desidera reindirizzare l'output alla pipe, sono disponibili due opzioni:  
  
-   Utilizzare le api Win32 per creare una pipe, pertanto la chiamata [AllocConsole](http://msdn.microsoft.com/library/windows/desktop/ms681944), imposta i valori di handle nella struttura di avvio e nella chiamata [CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms682425).  
  
-   Chiamare [\_popen, \_wpopen](../c-runtime-library/reference/popen-wpopen.md) che creeranno le pipe e richiamare l'applicazione utilizzando **cmd.exe \/c** o di **command.exe \/c**\).  
  
## Esempio  
  
```  
// crt_spawn.c  
// This program accepts a number in the range  
// 1-8 from the command line. Based on the number it receives,  
// it executes one of the eight different procedures that  
// spawn the process named child. For some of these procedures,  
// the CHILD.EXE file must be in the same directory; for  
// others, it only has to be in the same path.  
//  
  
#include <stdio.h>  
#include <process.h>  
  
char *my_env[] =  
{  
   "THIS=environment will be",  
   "PASSED=to child.exe by the",  
   "_SPAWNLE=and",  
   "_SPAWNLPE=and",  
   "_SPAWNVE=and",  
   "_SPAWNVPE=functions",  
   NULL  
};  
  
int main( int argc, char *argv[] )  
{  
   char *args[4];  
  
   // Set up parameters to be sent:   
   args[0] = "child";  
   args[1] = "spawn??";  
   args[2] = "two";  
   args[3] = NULL;  
  
   if (argc <= 2)  
   {  
      printf( "SYNTAX: SPAWN <1-8> <childprogram>\n" );  
      exit( 1 );  
   }  
  
   switch (argv[1][0])   // Based on first letter of argument   
   {  
   case '1':  
      _spawnl( _P_WAIT, argv[2], argv[2], "_spawnl", "two", NULL );  
      break;  
   case '2':  
      _spawnle( _P_WAIT, argv[2], argv[2], "_spawnle", "two",   
               NULL, my_env );  
      break;  
   case '3':  
      _spawnlp( _P_WAIT, argv[2], argv[2], "_spawnlp", "two", NULL );  
      break;  
   case '4':  
      _spawnlpe( _P_WAIT, argv[2], argv[2], "_spawnlpe", "two",   
                NULL, my_env );  
      break;  
   case '5':  
      _spawnv( _P_OVERLAY, argv[2], args );  
      break;  
   case '6':  
      _spawnve( _P_OVERLAY, argv[2], args, my_env );  
      break;  
   case '7':  
      _spawnvp( _P_OVERLAY, argv[2], args );  
      break;  
   case '8':  
      _spawnvpe( _P_OVERLAY, argv[2], args, my_env );  
      break;  
   default:  
      printf( "SYNTAX: SPAWN <1-8> <childprogram>\n" );  
      exit( 1 );  
   }  
   printf( "from SPAWN!\n" );  
}  
```  
  
  **output di un processo figlio**  
**da SPAWN\!**   
## Vedere anche  
 [Controllo processo e ambiente](../c-runtime-library/process-and-environment-control.md)   
 [abort](../c-runtime-library/reference/abort.md)   
 [atexit](../c-runtime-library/reference/atexit.md)   
 [Funzioni \_exec, \_wexec](../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../c-runtime-library/reference/exit-exit-exit.md)   
 [\_flushall](../c-runtime-library/reference/flushall.md)   
 [\_getmbcp](../c-runtime-library/reference/getmbcp.md)   
 [\_onexit, \_onexit\_m](../c-runtime-library/reference/onexit-onexit-m.md)   
 [\_setmbcp](../c-runtime-library/reference/setmbcp.md)   
 [system, \_wsystem](../c-runtime-library/reference/system-wsystem.md)