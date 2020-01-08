---
title: / DEPENDENTLOADFLAG (Impostazione dei flag di caricamento dipendente predefiniti)
description: L'opzione/DEPENDENTLOADFLAG imposta i flag predefiniti per le DLL caricate tramite LoadLibrary
ms.date: 12/22/2018
f1_keywords:
- dependentloadflag
helpviewer_keywords:
- LINK tool [C++], dependent load flags
- -DEPENDENTLOADFLAG linker option
- linker [C++], DEPENDENTLOADFLAG
- DEPENDENTLOADFLAG linker option
- /DEPENDENTLOADFLAG linker option
ms.openlocfilehash: 3a403f22c88ccd3e25ba95c183656ad2ffafd05a
ms.sourcegitcommit: ef34a11cb04511221bf5c7b9f4f55ad91a7a603f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/23/2019
ms.locfileid: "75329998"
---
# <a name="dependentloadflag-set-default-dependent-load-flags"></a>/ DEPENDENTLOADFLAG (Impostazione dei flag di caricamento dipendente predefiniti)

Imposta i flag di caricamento predefiniti utilizzati quando si utilizza `LoadLibrary` per caricare le dll.

## <a name="syntax"></a>Sintassi

> **/DEPENDENTLOADFLAG**[ __:__ *load_flags*]

### <a name="arguments"></a>Argomenti

*load_flags*<br/>
Valore intero a 16 bit "C" facoltativo in decimale, ottale con zero iniziali o esadecimale con una `0x`iniziali, che specifica i flag di caricamento dipendenti da applicare a tutte le chiamate [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) . Il valore predefinito è 0.

## <a name="remarks"></a>Note

Questa opzione è una novità di Visual Studio 2017. Si applica solo alle app in esecuzione in Windows 10 RS1 e versioni successive. Questa opzione viene ignorata da altri sistemi operativi che eseguono l'app.

Nei sistemi operativi supportati, questa opzione ha l'effetto di modificare le chiamate a `LoadLibrary("dependent.dll")` all'equivalente di `LoadLibraryEx("dependent.dll", 0, load_flags)`. Le chiamate a [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) non sono interessate. Questa opzione non si applica in modo ricorsivo alle DLL caricate dall'app.

Questo flag può essere usato per rendere più difficili gli attacchi di un [impianto di dll](/windows/win32/dlls/dynamic-link-library-security) . Se ad esempio un'app usa `LoadLibrary` per caricare una DLL dipendente, un utente malintenzionato potrebbe inserire una DLL con lo stesso nome nel percorso di ricerca usato da `LoadLibrary`, ad esempio la directory corrente, che può essere verificata prima delle directory di sistema se la modalità di ricerca DLL sicura è disabilitata. La modalità di ricerca DLL sicura inserisce la directory corrente dell'utente in un secondo momento nell'ordine di ricerca ed è abilitata per impostazione predefinita in Windows XP SP2 e versioni successive. Per ulteriori informazioni, vedere l' [ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order).

Se si specifica l'opzione di collegamento `/DEPENDENTLOADFLAG:0xA00` (il valore dei flag combinati `LOAD_LIBRARY_SEARCH_APPLICATION_DIR | LOAD_LIBRARY_SEARCH_SYSTEM32`), anche se la modalità di ricerca DLL sicura è disabilitata nel computer dell'utente, il percorso di ricerca della DLL è limitato alla directory dell'applicazione, seguito dalla directory%Windows%\System32. Un'opzione di `/DEPENDENTLOADFLAG:0x800` è ancora più restrittiva, limitando la ricerca alla directory%Windows%\System32. Le directory protette sono più complesse, ma non impossibili, perché un utente malintenzionato possa cambiare. Per informazioni sui flag disponibili e sui relativi valori simbolici e numerici, vedere la descrizione del parametro *dwFlags* in [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw). Per informazioni sull'ordine di ricerca utilizzato quando vengono utilizzati diversi flag di caricamento dipendenti, vedere l' [ordine di ricerca usando i flag di LOAD_LIBRARY_SEARCH](/windows/win32/dlls/dynamic-link-library-search-order#search-order-using-load_library_search-flags).

### <a name="to-set-the-dependentloadflag-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker DEPENDENTLOADFLAG nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare le **proprietà di configurazione** > **linker** > pagina delle proprietà **riga di comando** .

1. Immettere l'opzione in **Opzioni aggiuntive**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
- [Collegare un eseguibile a una DLL](../linking-an-executable-to-a-dll.md#linking-implicitly)
- [Collegare un eseguibile a una DLL](../linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)
- [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw)
- [Ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order)
