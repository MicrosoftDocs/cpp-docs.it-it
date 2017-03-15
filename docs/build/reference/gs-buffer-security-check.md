---
title: "/GS (Controllo sicurezza buffer) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.BufferSecurityCheck"
  - "VC.Project.VCCLCompilerTool.BufferSecurityCheck"
  - "/GS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "buffer [C++], sovraccarichi"
  - "sovraccarichi del buffer, opzione del compilatore /GS"
  - "GS (opzione del compilatore) [C++]"
  - "/GS (opzione del compilatore) [C++]"
  - "controllo sicurezza (opzione del compilatore) [C++]"
  - "-GS (opzione del compilatore) [C++]"
  - "buffer [C++], evitare i sovraccarichi"
ms.assetid: 8d8a5ea1-cd5e-42e1-bc36-66e1cd7e731e
caps.latest.revision: 40
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 40
---
# /GS (Controllo sicurezza buffer)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rileva alcuni sovraccarichi del buffer che sovrascrivono l'indirizzo del mittente di una funzione, l'indirizzo del gestore di eccezioni o tipi determinati di parametri.  Provocare un sovraccarico del buffer è una tecnica utilizzata dai pirati informatici per sfruttare codice che non applica restrizioni della dimensione del buffer.  
  
## Sintassi  
  
```  
/GS[-]  
```  
  
## Note  
 **\/GS** è attiva per impostazione predefinita.  Se si prevede che l'applicazione non presenti rischi di sicurezza, utilizzare **\/GS\-**.  Per ulteriori informazioni su **\/GS**, vedere [Controlli di sicurezza del compilatore in dettaglio](http://go.microsoft.com/fwlink/?linkid=7260).  Per ulteriori informazioni sulla soppressione del rilevamento del sovraccarico buffer, vedere [safebuffers](../../cpp/safebuffers.md).  
  
## Controlli di sicurezza.  
 Sulle funzioni ritenute soggette a problemi di sovraccarico del buffer, il compilatore allocherà spazio sullo stack prima dell'indirizzo di ritorno.  All'ingresso della funzione lo spazio allocato viene caricato con un *cookie di sicurezza* calcolato una volta al caricamento del modulo.  All'uscita della funzione, e durante la rimozione del frame in sistemi a 64 bit, verrà chiamata una funzione di supporto per garantire che il valore del cookie sia ancora lo stesso.  Un valore diverso indica che può essersi verificata una sovrascrittura dello stack.  Se viene rilevato un valore diverso, viene terminato il processo.  
  
## Buffer GS  
 Un controllo di sicurezza dell'overrun del buffer viene eseguito su un *buffer GS*.  Un buffer GS può essere uno di questi:  
  
-   Una matrice che è maggiore di 4 byte, con più di due elementi e dispone di un tipo di elemento che non è un tipo di puntatore.  
  
-   Una struttura dei dati la cui dimensione è maggiore di 8 byte e non contiene puntatori.  
  
-   Un buffer allocato tramite la funzione [\_alloca](../../c-runtime-library/reference/alloca.md).  
  
-   Qualsiasi classe o struttura che contiene un buffer GS.  
  
 Le istruzioni che seguono, ad esempio, dichiarano i buffer GS .  
  
```  
char buffer[20];  
int buffer[20];  
struct { int a; int b; int c; int d; } myStruct;  
struct { int a; char buf[20]; };  
```  
  
 Tuttavia, le istruzioni che seguono non dichiarano i buffer GS .  Le prime due dichiarazioni contengono elementi del tipo di puntatore.  La terza e la quarta istruzione dichiarano matrici la cui dimensione è troppo piccola.  La quinta istruzione dichiara una struttura la cui dimensione su una piattaforma x86 non è maggiore di 8 byte.  
  
```  
char *pBuf[20];  
void *pv[20];  
char buf[4];  
int buf[2];  
struct { int a; int b; };  
```  
  
## Inizializzare il cookie di sicurezza  
 L'opzione del compilatore **\/GS** richiede che venga inizializzato il cookie di sicurezza prima di eseguire qualsiasi funzione che utilizzi il cookie.  Il cookie di sicurezza deve essere inizializzato all'ingresso in un file EXE o in una DLL.  Questa operazione viene eseguita automaticamente quando si utilizzano i punti di ingresso CRT predefiniti \(mainCRTStartup, wmainCRTStartup, WinMainCRTStartup, wWinMainCRTStartup o \_DllMainCRTStartup\).  Se si utilizza un punto di ingresso alternativo, è necessario inizializzare manualmente il cookie di sicurezza chiamando [\_\_security\_init\_cookie](../../c-runtime-library/reference/security-init-cookie.md).  
  
## Informazioni protette  
 Nell'elenco seguente vengono illustrate le opzioni del compilatore **\/GS**:  
  
-   Indirizzo di ritorno di una chiamata a una funzione.  
  
-   Indirizzo di un gestore di eccezioni per una funzione.  
  
-   Parametri della funzione vulnerabili.  
  
 Su tutte le piattaforme, con l'opzione **\/GS** si tenta principalmente di rilevare i sovraccarichi del buffer diretti nell'indirizzo di ritorno.  I sovraccarichi del buffer vengono sfruttati più facilmente in piattaforme come x86 e x64, le quali utilizzano convenzioni di chiamata che archiviano l'indirizzo di ritorno delle chiamate di funzione sullo stack.  
  
 Nei processori x86, se una funzione utilizza un gestore di eccezioni, il compilatore inserisce anche un cookie per proteggere l'indirizzo del gestore eccezioni della funzione.  La verifica relativa al cookie viene effettuata durante la rimozione del frame.  
  
 **\/GS** protegge i *parametri vulnerabili* passati in una funzione.  Un parametro vulnerabile è un puntatore, un riferimento C\+\+ o una struttura C di tipo POD C\+\+ che contiene un puntatore o un buffer GS.  
  
 Un parametro vulnerabile viene allocato prima del cookie e delle variabili locali.  Un sovraccarico del buffer può sovrascrivere questi parametri.  Il codice nella funzione che utilizza questi parametri può provocare un attacco prima che la funzione restituisca un risultato e venga effettuato il controllo di sicurezza.  Per contenere i rischi, il compilatore crea una copia dei parametri vulnerabili nel corso del prologo della funzione e li inserisce sotto l'area di archiviazione di tutti i buffer.  
  
 Il compilatore non è in grado di effettuare copie di parametri vulnerabili nelle situazioni riportate di seguito:  
  
-   Funzioni che non contengono un buffer GS.  
  
-   Le ottimizzazioni \([Opzioni \/O](../../build/reference/o-options-optimize-code.md)\) non sono attivate.  
  
-   Funzioni con un elenco di argomenti variabili \(...\).  
  
-   Funzioni contrassegnate con [naked](../../cpp/naked-cpp.md).  
  
-   Funzioni che contengono codice assembly inline nella prima istruzione.  
  
-   Un parametro viene utilizzato esclusivamente con modalità che potrebbero essere meno sfruttabili nel caso di un sovraccarico del buffer.  
  
## Informazioni non protette  
 L'opzione di compilazione **\/GS** non protegge da tutti gli attacchi alla sicurezza dei sovraccarichi del buffer.  Se, ad esempio, in un oggetto sono presenti un buffer e una vtable, un sovraccarico del buffer potrebbe danneggiare la vtable.  
  
 Anche se si utilizza **\/GS**, tentare sempre di scrivere codice sicuro che non abbia sovraccarichi del buffer.  
  
#### Per impostare questa opzione del compilatore in Visual Studio  
  
1.  In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto, quindi scegliere **Proprietà**.  
  
     Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Nella finestra di dialogo **Pagine delle proprietà**, fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generazione codice**.  
  
4.  Modificare la proprietà **Controllo sicurezza buffer**.  
  
#### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BufferSecurityCheck%2A>.  
  
## Esempio  
 Questo esempio sovraccarica un buffer.  In questo modo, l'applicazione non viene eseguita durante il runtime.  
  
```  
// compile with: /c /W1  
#include <cstring>  
#include <stdlib.h>  
#pragma warning(disable : 4996)   // for strcpy use  
  
// Vulnerable function  
void vulnerable(const char *str) {  
   char buffer[10];  
   strcpy(buffer, str); // overrun buffer !!!  
  
   // use a secure CRT function to help prevent buffer overruns  
   // truncate string to fit a 10 byte buffer  
   // strncpy_s(buffer, _countof(buffer), str, _TRUNCATE);  
}  
  
int main() {  
   // declare buffer that is bigger than expected  
   char large_buffer[] = "This string is longer than 10 characters!!";  
   vulnerable(large_buffer);  
}  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)