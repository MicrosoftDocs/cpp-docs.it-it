---
title: / DEPENDENTLOADFLAG (Impostazione dei flag di caricamento dipendente predefiniti)
description: L'opzione/DEPENDENTLOADFLAG imposta i flag di caricamento dipendenti predefiniti per le DLL caricate da questo modulo.
ms.date: 01/22/2020
f1_keywords:
- dependentloadflag
helpviewer_keywords:
- LINK tool [C++], dependent load flags
- -DEPENDENTLOADFLAG linker option
- linker [C++], DEPENDENTLOADFLAG
- DEPENDENTLOADFLAG linker option
- /DEPENDENTLOADFLAG linker option
ms.openlocfilehash: 8d0f53ed13143ed7ff5c507df73937a86c07b5b8
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924201"
---
# <a name="dependentloadflag-set-default-dependent-load-flags"></a>/ DEPENDENTLOADFLAG (Impostazione dei flag di caricamento dipendente predefiniti)

::: moniker range="msvc-140"

L'opzione **/DEPENDENTLOADFLAG** richiede Visual Studio 2017 o versione successiva.

::: moniker-end

::: moniker range=">=msvc-150"

Imposta i flag di caricamento predefiniti usati quando il sistema operativo risolve le importazioni collegate in modo statico di un modulo.

## <a name="syntax"></a>Sintassi

> **/DEPENDENTLOADFLAG** [ __:__*load_flags* ]

### <a name="arguments"></a>Argomenti

*load_flags*<br/>
Valore integer facoltativo che specifica i flag di caricamento da applicare durante la risoluzione delle dipendenze di importazione collegate in modo statico del modulo. Il valore predefinito è 0. Per un elenco di valori di flag supportati, vedere le `LOAD_LIBRARY_SEARCH_*` voci in [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw).

## <a name="remarks"></a>Osservazioni

Quando il sistema operativo risolve le importazioni collegate in modo statico di un modulo, usa l' [ordine di ricerca predefinito](/windows/win32/dlls/dynamic-link-library-search-order). Usare l'opzione **/DEPENDENTLOADFLAG** per specificare un valore *load_flags* che modifichi il percorso di ricerca usato per risolvere queste importazioni. Nei sistemi operativi supportati, viene modificato l'ordine di ricerca della risoluzione dell'importazione statica, simile a quello di [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexa) quando si usano i `LOAD_LIBRARY_SEARCH` parametri. Per informazioni sull'ordine di ricerca impostato da *load_flags* , vedere l' [ordine di ricerca usando i flag di LOAD_LIBRARY_SEARCH](/windows/win32/dlls/dynamic-link-library-search-order#search-order-using-load_library_search-flags).

Questo flag può essere usato per rendere più difficile l'uso di un vettore di attacco di una [dll](/windows/win32/dlls/dynamic-link-library-security) . Si consideri ad esempio un'app a cui è stata collegata in modo statico una DLL:

- Un utente malintenzionato potrebbe applicare una DLL con lo stesso nome in un percorso di ricerca per la risoluzione dell'importazione, ad esempio la directory dell'applicazione. Le directory protette sono più complesse, ma non impossibili, perché un utente malintenzionato possa cambiare.

- Se la DLL non è presente nelle directory Application,%Windows%\System32 e% Windows%, l'importazione della risoluzione passa alla directory corrente. Un utente malintenzionato potrebbe inseminare una DLL.

In entrambi i casi, se si specifica l'opzione `/DEPENDENTLOADFLAG:0x800` di collegamento (il valore del flag `LOAD_LIBRARY_SEARCH_SYSTEM32` ), il percorso di ricerca del modulo è limitato alla directory%Windows%\System32 Offre una protezione dagli attacchi fitosanitari sulle altre directory. Per altre informazioni, vedere [sicurezza della libreria a collegamento dinamico](/windows/win32/dlls/dynamic-link-library-security).

Per visualizzare il valore impostato dall'opzione **/DEPENDENTLOADFLAG** in qualsiasi dll, utilizzare il comando [dumpbin](dumpbin-reference.md) con l'opzione [/loadConfig](loadconfig.md) .

L'opzione **/DEPENDENTLOADFLAG** è una novità di Visual Studio 2017. Si applica solo alle app in esecuzione in Windows 10 RS1 e versioni successive. Questa opzione viene ignorata da altri sistemi operativi che eseguono l'app.

### <a name="to-set-the-dependentloadflag-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker DEPENDENTLOADFLAG nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties** > pagina delle proprietà della riga di comando del **linker** proprietà di configurazione > **Command Line** .

1. Immettere l'opzione in **Opzioni aggiuntive** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [Collegare un eseguibile a una DLL in modo implicito](../linking-an-executable-to-a-dll.md#linking-implicitly)
- [Determinare il metodo di collegamento da utilizzare](../linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)
- [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw)
- [Ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)
- [Sicurezza della libreria a collegamento dinamico](/windows/win32/dlls/dynamic-link-library-security)

::: moniker-end
