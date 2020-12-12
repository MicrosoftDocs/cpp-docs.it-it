---
description: Altre informazioni su:/SAFESEH (l'immagine ha gestori delle eccezioni sicuri)
title: /SAFESEH (L'immagine ha gestori delle eccezioni sicuri)
ms.date: 11/04/2016
f1_keywords:
- /SAFESEH
helpviewer_keywords:
- /SAFESEH linker option
- -SAFESEH linker option
- SAFESEH linker option
ms.assetid: 7722ff99-b833-4c65-a855-aaca902ffcb7
ms.openlocfilehash: 723b5503bca1d98d7df0c638df1dfc8101fc116f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224985"
---
# <a name="safeseh-image-has-safe-exception-handlers"></a>/SAFESEH (L'immagine ha gestori delle eccezioni sicuri)

```
/SAFESEH[:NO]
```

Quando si specifica **/SAFESEH** , il linker produrrà un'immagine solo se può produrre anche una tabella dei gestori delle eccezioni sicure dell'immagine. Questa tabella specifica per il sistema operativo quali gestori di eccezioni sono validi per l'immagine.

**/SAFESEH** è valido solo quando si esegue il collegamento per le destinazioni x86. **/SAFESEH** non è supportato per le piattaforme in cui sono già stati indicati i gestori di eccezioni. Ad esempio, in x64 e ARM tutti i gestori di eccezioni sono indicati in PDATA. ML64.exe dispone del supporto per aggiungere annotazioni che emettono informazioni SEH (XDATA e PDATA) nell'immagine, consentendo di rimuovere le funzioni ml64. Per ulteriori informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) .

Se **/SAFESEH** non è specificato, il linker produrrà un'immagine con una tabella di gestori di eccezioni sicure se tutti i moduli sono compatibili con la funzionalità di gestione delle eccezioni sicura. Se i moduli non sono compatibili con la funzionalità di gestione delle eccezioni sicura, l'immagine risultante non conterrà una tabella di gestori eccezioni sicuri. Se [/Subsystem](subsystem-specify-subsystem.md) specifica WINDOWSCE o una delle opzioni EFI_ *, il linker non tenterà di produrre un'immagine con una tabella di gestori di eccezioni sicure, in quanto nessuno dei due sottosistemi può utilizzare le informazioni.

Se **/SAFESEH: No** viene specificato, il linker non produrrà un'immagine con una tabella di gestori di eccezioni sicure anche se tutti i moduli sono compatibili con la funzionalità di gestione delle eccezioni sicura.

La causa più comune per cui il linker non è in grado di produrre un'immagine è perché uno o più file di input (moduli) al linker non sono compatibili con la funzionalità gestori di eccezioni sicure. Un motivo comune per cui un modulo non è compatibile con i gestori di eccezioni Safe è perché è stato creato con un compilatore da una versione precedente di Visual C++.

È anche possibile registrare una funzione come gestore di eccezioni strutturate usando [. SAFESEH](../../assembler/masm/dot-safeseh.md).

Non è possibile contrassegnare un file binario esistente come avente gestori di eccezioni sicure (o nessun gestore di eccezioni); le informazioni sulla gestione delle eccezioni sicure devono essere aggiunte in fase di compilazione.

La capacità del linker di creare una tabella di gestori di eccezioni sicure dipende dall'applicazione che utilizza la libreria di runtime C. Se si esegue il collegamento con [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) e si desidera una tabella di gestori di eccezioni sicure, è necessario fornire uno struct di configurazione di caricamento (ad esempio, nel file di origine CRT loadcfg. c) contenente tutte le voci definite per Visual C++. Ad esempio:

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **linker** .

1. Selezionare la pagina delle proprietà **riga di comando** .

1. Immettere l'opzione nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
