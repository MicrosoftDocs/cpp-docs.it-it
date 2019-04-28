---
title: /SAFESEH (L'immagine ha gestori delle eccezioni sicuri)
ms.date: 11/04/2016
f1_keywords:
- /SAFESEH
helpviewer_keywords:
- /SAFESEH linker option
- -SAFESEH linker option
- SAFESEH linker option
ms.assetid: 7722ff99-b833-4c65-a855-aaca902ffcb7
ms.openlocfilehash: 62784933cbecd4f312c52ae98cab7d232b893f35
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62318641"
---
# <a name="safeseh-image-has-safe-exception-handlers"></a>/SAFESEH (L'immagine ha gestori delle eccezioni sicuri)

```
/SAFESEH[:NO]
```

Quando **/SAFESEH** viene specificato, il linker produrrà solo un'immagine, se può produrre anche una tabella di gestori eccezioni sicuri dell'immagine. Questa tabella specifica per il sistema operativo i gestori di eccezioni sono validi per l'immagine.

**/SAFESEH** è valida solo quando si collegano x86 a destinazioni. **/SAFESEH** non è supportata per le piattaforme che hanno già i gestori delle eccezioni. Ad esempio, su ARM e x64, tutti i gestori di eccezioni sono indicati nella sezione PDATA. Ml64.exe è supportata l'aggiunta di annotazioni che generano le informazioni di gestione delle eccezioni Strutturata (XDATA e PDATA) nell'immagine, consentendo di funzioni ml64. Visualizzare [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) per altre informazioni.

Se **/SAFESEH** non viene specificato, il linker produrrà un'immagine con una tabella dei gestori eccezioni sicuri se tutti i moduli siano compatibili con la funzionalità di gestione sicura delle eccezioni. Se tutti i moduli non sono compatibili con funzionalità di gestione delle eccezioni sicuri, l'immagine risultante non conterrà una tabella di gestori eccezioni sicuri. Se [/SUBSYSTEM](subsystem-specify-subsystem.md) specifica WINDOWSCE o una delle opzioni di EFI _ *, il linker non tenterà di produrre un'immagine con una tabella dei gestori eccezioni sicuri, poiché nessuno di questi sottosistemi possono usare le informazioni.

Se **/SAFESEH:NO** viene specificato, il linker non produrrà un'immagine con una tabella dei gestori eccezioni sicuri anche se tutti i moduli siano compatibili con la funzionalità di gestione sicura delle eccezioni.

Il motivo più comune per il linker non deve essere in grado di produrre un'immagine è perché uno o più dei file di input (moduli) per il linker non era compatibile con la funzionalità di gestori eccezioni sicuri. Un motivo comune per un modulo non sia compatibile con gestori eccezioni sicuri è perché è stato creato con un compilatore da una versione precedente di Visual C++.

È anche possibile registrare una funzione come gestore di eccezioni strutturate con [. SAFESEH](../../assembler/masm/dot-safeseh.md).

Non è possibile contrassegnare un oggetto esistente binario con gestori eccezioni sicuri (o nessun gestore eccezioni); in fase di compilazione è necessario aggiungere informazioni sulla gestione delle eccezioni sicuri.

La capacità del linker per compilare una tabella di gestori eccezioni sicuri dipende dall'applicazione usando la libreria di runtime C. Se si collega con [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) e si vuole una tabella di gestori eccezioni sicuri, è necessario fornire una struttura di configurazione di caricamento (ad esempio può essere trovata nel file di origine CRT loadcfg. c) che contiene tutte le voci definite per Visual C++. Ad esempio:

```
#include <windows.h>
extern DWORD_PTR __security_cookie;  /* /GS security cookie */

/*
* The following two names are automatically created by the linker for any
* image that has the safe exception table present.
*/

extern PVOID __safe_se_handler_table[]; /* base of safe handler entry table */
extern BYTE  __safe_se_handler_count;  /* absolute symbol whose address is
                                           the count of table entries */
typedef struct {
    DWORD       Size;
    DWORD       TimeDateStamp;
    WORD        MajorVersion;
    WORD        MinorVersion;
    DWORD       GlobalFlagsClear;
    DWORD       GlobalFlagsSet;
    DWORD       CriticalSectionDefaultTimeout;
    DWORD       DeCommitFreeBlockThreshold;
    DWORD       DeCommitTotalFreeThreshold;
    DWORD       LockPrefixTable;            // VA
    DWORD       MaximumAllocationSize;
    DWORD       VirtualMemoryThreshold;
    DWORD       ProcessHeapFlags;
    DWORD       ProcessAffinityMask;
    WORD        CSDVersion;
    WORD        Reserved1;
    DWORD       EditList;                   // VA
    DWORD_PTR   *SecurityCookie;
    PVOID       *SEHandlerTable;
    DWORD       SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY32_2;

const IMAGE_LOAD_CONFIG_DIRECTORY32_2 _load_config_used = {
    sizeof(IMAGE_LOAD_CONFIG_DIRECTORY32_2),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &__security_cookie,
    __safe_se_handler_table,
    (DWORD)(DWORD_PTR) &__safe_se_handler_count
};
```

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **Linker** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Inserire l'opzione nella **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
