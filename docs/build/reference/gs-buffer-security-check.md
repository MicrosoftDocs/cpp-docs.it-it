---
title: /GS (Controllo sicurezza buffer)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.BufferSecurityCheck
- VC.Project.VCCLCompilerTool.BufferSecurityCheck
- /GS
helpviewer_keywords:
- buffers [C++], buffer overruns
- buffer overruns, compiler /GS switch
- GS compiler option [C++]
- /GS compiler option [C++]
- security check compiler option [C++]
- -GS compiler option [C++]
- buffers [C++], avoiding overruns
ms.assetid: 8d8a5ea1-cd5e-42e1-bc36-66e1cd7e731e
ms.openlocfilehash: 6681ff09b846011af1b500f88a535c208d0bc1c1
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417591"
---
# <a name="gs-buffer-security-check"></a>/GS (Controllo sicurezza buffer)

Rileva alcuni sovraccarichi del buffer che sovrascrivono l'indirizzo restituito della funzione, l'indirizzo del gestore di eccezioni o determinati tipi di parametri. Causando un sovraccarico del buffer è una tecnica usata dagli utenti malintenzionati di sfruttare il codice che non applica le restrizioni della dimensione del buffer.

## <a name="syntax"></a>Sintassi

```
/GS[-]
```

## <a name="remarks"></a>Note

**/GS** è attivata per impostazione predefinita. Se si prevede che l'applicazione in modo non presenti rischi di sicurezza, usare **/GS-**. Per altre informazioni sull'eliminazione dei sovraccarichi del buffer, vedere [safebuffers](../../cpp/safebuffers.md).

## <a name="security-checks"></a>Controlli di sicurezza

Sulle funzioni che il compilatore riconosce come elementi soggetti a problemi di sovraccarico del buffer, il compilatore alloca spazio dello stack prima l'indirizzo del mittente. In ingresso nella funzione, lo spazio allocato viene caricato con un *cookie di sicurezza* che viene calcolata una sola volta al caricamento del modulo. In uscita dalla funzione e durante la rimozione del frame nei sistemi operativi a 64 bit, viene chiamata una funzione helper per assicurarsi che il valore del cookie è comunque lo stesso. Un altro valore indica che una sovrascrittura dello stack potrebbe essersi verificato. Se viene rilevato un valore diverso, il processo viene terminato.

## <a name="gs-buffers"></a>Buffer /GS

Un controllo di sicurezza di sovraccarico del buffer viene eseguito su un *buffer GS*. Un buffer GS può essere uno dei seguenti:

- Una matrice di dimensioni superiori a 4 byte, sono presenti più di due elementi e ha un tipo di elemento che non è un tipo di puntatore.

- Struttura di dati le cui dimensioni sono maggiori di 8 byte e non contiene puntatori.

- Un buffer allocato usando il [alloca](../../c-runtime-library/reference/alloca.md) (funzione).

- Qualsiasi classe o struttura contenente un buffer GS.

Ad esempio, le istruzioni seguenti dichiarano i buffer GS.

```cpp
char buffer[20];
int buffer[20];
struct { int a; int b; int c; int d; } myStruct;
struct { int a; char buf[20]; };
```

Le istruzioni seguenti, tuttavia, non dichiarano i buffer GS. Le prime due dichiarazioni contengono gli elementi di tipo puntatore. La terza e quarta istruzione dichiarano le matrici con dimensioni sono troppo piccolo. La quinta istruzione dichiara una struttura le cui dimensioni su x86 piattaforma non è più di 8 byte.

```cpp
char *pBuf[20];
void *pv[20];
char buf[4];
int buf[2];
struct { int a; int b; };
```

## <a name="initialize-the-security-cookie"></a>Inizializzare il Cookie di sicurezza

Il **/GS** opzione del compilatore richiede che il cookie di sicurezza sia inizializzata prima di eseguire qualsiasi funzione che usa i cookie. Il cookie di sicurezza deve essere inizializzato immediatamente all'ingresso in un file EXE o DLL. Questa operazione viene eseguita automaticamente se si usano i punti di ingresso VCRuntime predefinite: mainCRTStartup, wmainCRTStartup, WinMainCRTStartup, wWinMainCRTStartup, DllMainCRTStartup o. Se si usa un punto di ingresso alternativo, è necessario inizializzare il cookie di sicurezza manualmente chiamando [security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md).

## <a name="what-is-protected"></a>Elementi protetti

Il **/GS** opzione del compilatore consente di proteggere gli elementi seguenti:

- L'indirizzo del mittente di una chiamata di funzione.

- L'indirizzo di un gestore di eccezioni per una funzione.

- Parametri della funzione vulnerabile.

In tutte le piattaforme, **/GS** tenta di rilevare i sovraccarichi del buffer nell'indirizzo di ritorno. I sovraccarichi del buffer sono più facilmente sfruttati su piattaforme, ad esempio x86 e x64, che usano convenzioni di chiamata che archiviano l'indirizzo del mittente di una chiamata di funzione nello stack.

Su x86, se una funzione Usa un gestore di eccezioni, il compilatore inserisce un cookie di sicurezza per proteggere l'indirizzo del gestore di eccezioni. Il cookie viene controllato durante la rimozione del frame.

**/GS** protegge *parametri vulnerabili* che vengono passati in una funzione. Un parametro vulnerabile è un puntatore, un riferimento di C++, una C-struttura (tipo C++ POD) che contiene un puntatore o un buffer GS.

Prima del cookie e le variabili locali viene allocato un parametro vulnerabile. Un sovraccarico del buffer può sovrascrivere tali parametri. E codice nella funzione che usa questi parametri può causare un attacco prima che la funzione restituisce e viene eseguito il controllo di sicurezza. Per ridurre questo rischio, il compilatore crea una copia dei parametri vulnerabili durante il prologo della funzione e li inserisce sotto l'area di archiviazione di tutti i buffer.

Il compilatore non esegue copie dei parametri esposti nelle situazioni seguenti:

- Funzioni che non contengono un buffer GS.

- Le ottimizzazioni ([Opzioni /O](../../build/reference/o-options-optimize-code.md)) non sono abilitati.

- Funzioni che hanno un elenco di argomenti variabili (...).

- Le funzioni che sono contrassegnate con [naked](../../cpp/naked-cpp.md).

- Funzioni che contengono codice assembly inline nella prima istruzione.

- Un parametro viene utilizzato solo in modi che hanno meno probabili di essere sfruttabile in caso di un sovraccarico del buffer.

## <a name="what-is-not-protected"></a>Che cosa non è protetto

Il **/GS** opzione del compilatore non offre protezione contro attacchi alla sicurezza di tutti i sovraccarichi del buffer. Ad esempio, se si dispone di un buffer e un oggetto vtable in un oggetto, un sovraccarico del buffer potrebbe danneggiare la vtable.

Anche se si usa **/GS**, tentano sempre di scrivere codice protetto che non dispone di alcun sovraccarichi del buffer.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Nelle **Esplora soluzioni**, fare clic sul progetto e quindi fare clic su **proprietà**.

   Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Nel **pagine delle proprietà** finestra di dialogo, fare clic sul **C/C++** cartella.

1. Scegliere il **generazione di codice** pagina delle proprietà.

1. Modificare il **controllo sicurezza Buffer** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BufferSecurityCheck%2A>.

## <a name="example"></a>Esempio

In questo esempio i sovraccarichi del buffer. In questo modo l'applicazione avrà esito negativo in fase di esecuzione.

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

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
