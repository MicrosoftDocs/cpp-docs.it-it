---
title: /GS (Controllo sicurezza buffer)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLWCECompilerTool.BufferSecurityCheck
- VC.Project.VCCLCompilerTool.BufferSecurityCheck
helpviewer_keywords:
- buffers [C++], buffer overruns
- buffer overruns, compiler /GS switch
- GS compiler option [C++]
- /GS compiler option [C++]
- security check compiler option [C++]
- -GS compiler option [C++]
- buffers [C++], avoiding overruns
ms.assetid: 8d8a5ea1-cd5e-42e1-bc36-66e1cd7e731e
ms.openlocfilehash: 92d296e8079a9ecd8d366c46bbdad8b2ee5dc313
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439570"
---
# <a name="gs-buffer-security-check"></a>/GS (Controllo sicurezza buffer)

Rileva alcuni sovraccarichi del buffer che sovrascrivono l'indirizzo restituito di una funzione, l'indirizzo del gestore di eccezioni o alcuni tipi di parametri. La causa di un sovraccarico del buffer è una tecnica usata dagli hacker per sfruttare il codice che non impone restrizioni sulle dimensioni del buffer.

## <a name="syntax"></a>Sintassi

```
/GS[-]
```

## <a name="remarks"></a>Osservazioni

**/GS** è on per impostazione predefinita. Se si prevede che l'applicazione non disponga di alcuna esposizione alla sicurezza, utilizzare **/GS-** . Per ulteriori informazioni sull'eliminazione del rilevamento del sovraccarico del buffer, vedere [safebuffers](../../cpp/safebuffers.md).

## <a name="security-checks"></a>Controlli di sicurezza

Sulle funzioni riconosciute dal compilatore come soggetto a problemi di sovraccarico del buffer, il compilatore alloca spazio nello stack prima dell'indirizzo mittente. Nella voce della funzione, lo spazio allocato viene caricato con un *cookie di sicurezza* calcolato una volta al caricamento del modulo. Alla chiusura della funzione e durante la rimozione dei frame nei sistemi operativi a 64 bit, viene chiamata una funzione di supporto per assicurarsi che il valore del cookie sia ancora lo stesso. Un valore diverso indica che è possibile che si sia verificata una sovrascrittura dello stack. Se viene rilevato un valore diverso, il processo viene terminato.

## <a name="gs-buffers"></a>Buffer GS

Viene eseguito un controllo di sicurezza del sovraccarico del buffer su un *buffer GS*. Un buffer GS può essere uno dei seguenti:

- Una matrice di dimensioni maggiori di 4 byte, ha più di due elementi e ha un tipo di elemento che non è un tipo di puntatore.

- Struttura di dati la cui dimensione è maggiore di 8 byte e non contiene puntatori.

- Buffer allocato utilizzando la funzione [_alloca](../../c-runtime-library/reference/alloca.md) .

- Qualsiasi classe o struttura che contiene un buffer GS.

Ad esempio, le istruzioni seguenti dichiarano i buffer GS.

```cpp
char buffer[20];
int buffer[20];
struct { int a; int b; int c; int d; } myStruct;
struct { int a; char buf[20]; };
```

Tuttavia, le istruzioni seguenti non dichiarano i buffer GS. Le prime due dichiarazioni contengono elementi di tipo puntatore. La terza e la quarta istruzione dichiarano matrici la cui dimensione è troppo piccola. La Quinta istruzione dichiara una struttura la cui dimensione su una piattaforma x86 non è superiore a 8 byte.

```cpp
char *pBuf[20];
void *pv[20];
char buf[4];
int buf[2];
struct { int a; int b; };
```

## <a name="initialize-the-security-cookie"></a>Inizializza il cookie di sicurezza

L'opzione del compilatore **/GS** richiede che il cookie di sicurezza venga inizializzato prima dell'esecuzione di qualsiasi funzione che usa il cookie. Il cookie di sicurezza deve essere inizializzato immediatamente alla voce di un file EXE o DLL. Questa operazione viene eseguita automaticamente se si usano i punti di ingresso predefiniti VCRuntime: mainCRTStartup, wmainCRTStartup, WinMainCRTStartup, wWinMainCRTStartup o _DllMainCRTStartup. Se si utilizza un punto di ingresso alternativo, è necessario inizializzare manualmente il cookie di sicurezza chiamando [__security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md).

## <a name="what-is-protected"></a>Elementi protetti

L'opzione del compilatore **/GS** protegge gli elementi seguenti:

- Indirizzo di ritorno di una chiamata di funzione.

- Indirizzo di un gestore di eccezioni per una funzione.

- Parametri di funzione vulnerabili.

In tutte le piattaforme, **/GS** tenta di rilevare i sovraccarichi del buffer nell'indirizzo mittente. I sovraccarichi del buffer sono più facilmente sfruttabili su piattaforme come x86 e x64, che usano convenzioni di chiamata che archiviano l'indirizzo di ritorno di una chiamata di funzione nello stack.

In x86, se una funzione utilizza un gestore di eccezioni, il compilatore inserisce un cookie di sicurezza per proteggere l'indirizzo del gestore di eccezioni. Il cookie viene verificato durante la rimozione del frame.

**/GS** protegge i *parametri vulnerabili* passati in una funzione. Un parametro vulnerabile è un puntatore, un C++ riferimento, una struttura C (C++ tipo POD) che contiene un puntatore o un buffer GS.

Un parametro vulnerabile viene allocato prima del cookie e delle variabili locali. Un sovraccarico del buffer può sovrascrivere questi parametri. E il codice nella funzione che usa questi parametri può causare un attacco prima che la funzione restituisca e viene eseguito il controllo di sicurezza. Per ridurre al minimo questo rischio, il compilatore crea una copia dei parametri vulnerabili durante il prologo della funzione e li inserisce sotto l'area di archiviazione per tutti i buffer.

Il compilatore non esegue copie dei parametri vulnerabili nelle situazioni seguenti:

- Funzioni che non contengono un buffer GS.

- Le ottimizzazioni ([Opzioni/o](o-options-optimize-code.md)) non sono abilitate.

- Funzioni che dispongono di un elenco di argomenti variabili (...).

- Funzioni contrassegnate con [naked](../../cpp/naked-cpp.md).

- Funzioni che contengono codice assembly inline nella prima istruzione.

- Un parametro viene utilizzato solo in modi con meno probabilità di essere sfruttabili in caso di sovraccarico del buffer.

## <a name="what-is-not-protected"></a>Elementi non protetti

L'opzione del compilatore **/GS** non protegge da tutti gli attacchi di sicurezza del sovraccarico del buffer. Se, ad esempio, si dispone di un buffer e di un vtable in un oggetto, un sovraccarico del buffer potrebbe danneggiare il vtable.

Anche se si usa **/GS**, provare sempre a scrivere codice protetto privo di sovraccarichi del buffer.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto, quindi scegliere **Proprietà**.

   Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Nella finestra di dialogo **pagine delle proprietà** fare clic sulla cartella **C/C++**  .

1. Fare clic sulla pagina delle proprietà **generazione codice** .

1. Modificare la proprietà del **controllo di sicurezza del buffer** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BufferSecurityCheck%2A>.

## <a name="example"></a>Esempio

Questo esempio esegue il overrun di un buffer. In questo modo l'applicazione avrà esito negativo in fase di esecuzione.

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

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
