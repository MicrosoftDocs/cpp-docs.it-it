---
title: -GS (controllo sicurezza Buffer) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCCLWCECompilerTool.BufferSecurityCheck
- VC.Project.VCCLCompilerTool.BufferSecurityCheck
- /GS
dev_langs: C++
helpviewer_keywords:
- buffers [C++], buffer overruns
- buffer overruns, compiler /GS switch
- GS compiler option [C++]
- /GS compiler option [C++]
- security check compiler option [C++]
- -GS compiler option [C++]
- buffers [C++], avoiding overruns
ms.assetid: 8d8a5ea1-cd5e-42e1-bc36-66e1cd7e731e
caps.latest.revision: "40"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 21ebf470372c24a4e1ab5922f1d98c1a434691a8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="gs-buffer-security-check"></a>/GS (Controllo sicurezza buffer)  
  
Rileva i sovraccarichi del buffer che sovrascrivono indirizzo restituito della funzione, l'indirizzo del gestore di eccezioni o determinati tipi di parametri. Causando un sovraccarico del buffer è una tecnica utilizzata da utenti malintenzionati di sfruttare codice che non impone limiti alla dimensione del buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GS[-]  
```  
  
## <a name="remarks"></a>Note  
  
**/GS** è attivata per impostazione predefinita. Se si prevede che l'applicazione per non presenti rischi di sicurezza, utilizzare **/GS-**. Per ulteriori informazioni su **/GS**, vedere [del compilatore controlli di sicurezza In profondità](http://go.microsoft.com/fwlink/?linkid=7260). Per ulteriori informazioni sull'eliminazione di rilevamento di sovraccarichi del buffer, vedere [safebuffers](../../cpp/safebuffers.md).  
  
## <a name="security-checks"></a>Controlli di sicurezza  
  
Con le funzioni che il compilatore riconosce soggetta a problemi di sovraccarico del buffer, il compilatore alloca spazio sullo stack prima l'indirizzo del mittente. All'ingresso della funzione, lo spazio allocato viene caricato con un *cookie di sicurezza* che viene calcolata una volta al caricamento del modulo. Uscita della funzione e durante la rimozione del frame nei sistemi operativi a 64 bit, viene chiamata una funzione di supporto per assicurarsi che il valore del cookie è comunque lo stesso. Un altro valore indica che una sovrascrittura dello stack si sono verificati. Se viene rilevato un valore diverso, il processo viene terminato.  
  
## <a name="gs-buffers"></a>Buffer GS  
  
Viene eseguito un controllo di sicurezza di sovraccarico del buffer su un *buffer GS*. Un buffer GS può essere uno dei seguenti:  
  
-   Una matrice di dimensioni superiori a 4 byte, sono presenti più di due elementi e abbia un tipo di elemento che non è un tipo di puntatore.  
  
-   Una struttura di dati le cui dimensioni sono maggiori di 8 byte e non contiene puntatori.  
  
-   Un buffer allocato tramite il [alloca](../../c-runtime-library/reference/alloca.md) (funzione).  
  
-   Qualsiasi classe o struttura che contiene un buffer GS.  
  
Ad esempio, le istruzioni seguenti dichiarano i buffer GS.  
  
```cpp  
char buffer[20];  
int buffer[20];  
struct { int a; int b; int c; int d; } myStruct;  
struct { int a; char buf[20]; };  
```  
  
Tuttavia, le istruzioni seguenti dichiarano i buffer GS. Le prime due dichiarazioni contengono elementi di tipo puntatore. La terza e quarta istruzione dichiarano matrici la cui dimensione è troppo piccola. La quinta istruzione dichiara una struttura la cui dimensione su x86 piattaforma non è più di 8 byte.  
  
```cpp  
char *pBuf[20];  
void *pv[20];  
char buf[4];  
int buf[2];  
struct { int a; int b; };  
```  
  
## <a name="initialize-the-security-cookie"></a>Inizializza il Cookie di sicurezza  
  
Il **/GS** l'opzione del compilatore richiede che il cookie di sicurezza sia inizializzata prima di eseguire qualsiasi funzione che utilizza i cookie. Il cookie di sicurezza deve essere inizializzato immediatamente all'ingresso in un file EXE o DLL. Questa operazione viene eseguita automaticamente se si utilizzano i punti di ingresso predefinito VCRuntime: mainCRTStartup, wmainCRTStartup, WinMainCRTStartup, wWinMainCRTStartup, o DllMainCRTStartup. Se si utilizza un punto di ingresso alternativo, è necessario inizializzare manualmente il cookie di sicurezza chiamando [security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md).  
  
## <a name="what-is-protected"></a>Elementi protetti  
  
Il **/GS** l'opzione del compilatore consente di proteggere gli elementi seguenti:  
  
-   L'indirizzo del mittente di una chiamata di funzione.  
  
-   L'indirizzo di un gestore di eccezioni per una funzione.  
  
-   Parametri della funzione vulnerabili.  
  
In tutte le piattaforme, **/GS** tenta di rilevare i sovraccarichi del buffer nell'indirizzo del mittente. Sovraccarichi del buffer vengono sfruttati più facilmente in piattaforme, ad esempio x86 e x64, che usano convenzioni di chiamata che archiviano l'indirizzo del mittente di una chiamata di funzione nello stack.  
  
X86, se una funzione utilizza un gestore di eccezioni, il compilatore inserisce un cookie di sicurezza per proteggere l'indirizzo del gestore eccezioni. Il cookie viene verificato durante la rimozione del frame.  
  
**/GS** protegge *parametri vulnerabili* che vengono passati in una funzione. Un parametro vulnerabile è un puntatore, un riferimento di C++, una C-struttura (tipo POD C++) che contiene un puntatore o un buffer GS.  
  
Un parametro vulnerabile viene allocato prima del cookie e le variabili locali. Un sovraccarico del buffer può sovrascrivere questi parametri. E codice della funzione che utilizza questi parametri può provocare un attacco prima che la funzione restituisce e viene eseguito il controllo di sicurezza. Per ridurre al minimo questo rischio, il compilatore crea una copia dei parametri vulnerabili nel corso del prologo di funzione e li inserisce sotto l'area di archiviazione di tutti i buffer.  
  
Il compilatore non copie di parametri vulnerabili nelle situazioni seguenti:  
  
-   Funzioni che non contengono un buffer GS.  
  
-   Ottimizzazioni ([Opzioni /O](../../build/reference/o-options-optimize-code.md)) non sono abilitati.  
  
-   Funzioni contenenti un elenco di argomenti variabili (...).  
  
-   Funzioni che sono contrassegnate con [naked](../../cpp/naked-cpp.md).  
  
-   Funzioni che contengono il codice assembly inline nella prima istruzione.  
  
-   Un parametro viene utilizzato solo in modi che hanno meno probabili di essere sfruttabili in caso di un sovraccarico del buffer.  
  
## <a name="what-is-not-protected"></a>Elementi non protetti  
  
Il **/GS** l'opzione del compilatore non offre protezione contro attacchi alla sicurezza di tutti i sovraccarichi del buffer. Ad esempio, se si dispone di un buffer e un oggetto vtable in un oggetto, un sovraccarico del buffer potrebbe danneggiare la vtable.  
  
Anche se si utilizza **/GS**, tentare sempre di scrivere codice protetto che non dispone di alcun sovraccarichi del buffer.  
  
### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio  
  
1.  In **Esplora**, fare clic sul progetto e quindi fare clic su **proprietà**.  
  
     Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Nel **pagine delle proprietà** la finestra di dialogo, fare clic su di **C/C++** cartella.  
  
3.  Fare clic su di **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare il **controllo sicurezza Buffer** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BufferSecurityCheck%2A>.  
  
## <a name="example"></a>Esempio  
  
In questo esempio sovraccarichi del buffer. In questo modo l'applicazione avrà esito negativo in fase di esecuzione.  
  
```C  
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
  
## <a name="see-also"></a>Vedere anche  
  
[Opzioni del compilatore](../../build/reference/compiler-options.md)   
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)