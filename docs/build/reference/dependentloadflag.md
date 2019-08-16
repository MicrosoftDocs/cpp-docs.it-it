---
title: / DEPENDENTLOADFLAG (Impostazione dei flag di caricamento dipendente predefiniti)
description: L'opzione/DEPENDENTLOADFLAG imposta i flag predefiniti per le DLL caricate tramite LoadLibrary
ms.date: 05/18/2018
f1_keywords:
- dependentloadflag
helpviewer_keywords:
- LINK tool [C++], dependent load flags
- -DEPENDENTLOADFLAG linker option
- linker [C++], DEPENDENTLOADFLAG
- DEPENDENTLOADFLAG linker option
- /DEPENDENTLOADFLAG linker option
ms.openlocfilehash: 072fa1103d049c7d5c395ae88d268f3b47e20b4f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492947"
---
# <a name="dependentloadflag-set-default-dependent-load-flags"></a>/ DEPENDENTLOADFLAG (Impostazione dei flag di caricamento dipendente predefiniti)

Imposta i flag di caricamento predefiniti usati `LoadLibrary` quando viene usato per caricare le dll.

## <a name="syntax"></a>Sintassi

> **/DEPENDENTLOADFLAG**[ **:** _loadflags_]

### <a name="arguments"></a>Argomenti

*loadflags*<br/>
Valore intero a 16 bit "C" facoltativo in decimale, ottale con zero iniziali o esadecimale con un valore di `0x`tipo Leading che specifica i flag di caricamento dipendenti da applicare a tutte le chiamate [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) . Il valore predefinito è 0.

## <a name="remarks"></a>Note

Questa opzione è una novità di Visual Studio 2017 ed è valida solo per le app in esecuzione in Windows 10 RS1 e versioni successive. Questa opzione viene ignorata da altri sistemi operativi che eseguono l'app.

Nei sistemi operativi supportati, questa opzione ha l'effetto di modificare le chiamate `LoadLibrary("dependent.dll")` a nell'equivalente di `LoadLibraryEx("dependent.dll", 0, loadflags)`. Le chiamate a [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) non sono interessate. Questa opzione non si applica in modo ricorsivo alle DLL caricate dall'app.

Questo flag può essere usato per prevenire gli attacchi di un impianto DLL. Se, ad esempio, un'app `LoadLibrary` USA per caricare una DLL dipendente, un utente malintenzionato potrebbe inserire una dll con lo stesso nome nel percorso di `LoadLibrary`ricerca usato da, ad esempio la directory corrente, che può essere verificata prima delle directory di sistema se la modalità di ricerca dll sicura è disabilitato. La modalità di ricerca DLL sicura inserisce la directory corrente dell'utente in un secondo momento nell'ordine di ricerca ed è abilitata per impostazione predefinita in Windows XP SP2 e versioni successive. Per ulteriori informazioni, vedere l' [ordine di ricerca della libreria a collegamento dinamico](/windows/win32/Dlls/dynamic-link-library-search-order).

Se si specifica l'opzione `/DEPENDENTLOADFLAG:0xA00` di collegamento (il valore dei flag `LOAD_LIBRARY_SEARCH_APPLICATION_DIR | LOAD_LIBRARY_SEARCH_SYSTEM32`combinati), anche se la modalità di ricerca dll sicura è disabilitata nel computer dell'utente, il percorso di ricerca della dll è limitato alle directory protette più difficili da impedire a un utente malintenzionato modificare. Per informazioni sui flag disponibili e sui relativi valori simbolici e numerici, vedere la descrizione del parametro *dwFlags* in [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw).

### <a name="to-set-the-dependentloadflag-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker DEPENDENTLOADFLAG nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà della**riga di comando** del**linker** >  **Proprietà** > di configurazione.

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
