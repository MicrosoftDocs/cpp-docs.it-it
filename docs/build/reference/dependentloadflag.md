---
title: / DEPENDENTLOADFLAG (flag di caricamento dipendente Set predefiniti)
description: L'opzione /DEPENDENTLOADFLAG imposta flag predefiniti per le DLL caricate usando LoadLibrary
ms.date: 05/18/2018
f1_keywords:
- dependentloadflag
helpviewer_keywords:
- LINK tool [C++], dependent load flags
- -DEPENDENTLOADFLAG linker option
- linker [C++], DEPENDENTLOADFLAG
- DEPENDENTLOADFLAG linker option
- /DEPENDENTLOADFLAG linker option
ms.openlocfilehash: 0bdf2542d641f751f40757079eb576f2c97540dc
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51326160"
---
# <a name="dependentloadflag-set-default-dependent-load-flags"></a>/ DEPENDENTLOADFLAG (flag di caricamento dipendente Set predefiniti)

Imposta i flag di caricamento predefinito utilizzato quando `LoadLibrary` viene usato per caricare le DLL.

## <a name="syntax"></a>Sintassi

> **/ DEPENDENTLOADFLAG**[**:**_loadflags_]

### <a name="arguments"></a>Argomenti

*loadflags*<br/>
Un valore integer a 16 bit "C"-style facoltativo in decimali, ottali con uno zero iniziale o esadecimale con un leader `0x`, che specifica i flag di caricamento dipendente da applicare a tutti [LoadLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa) chiamate. Il valore predefinito è 0.

## <a name="remarks"></a>Note

Questa opzione è stata introdotta in Visual Studio 2017 e si applica solo alle App in esecuzione in Windows 10 RS1 e versioni successive. Questa opzione viene ignorata da altri sistemi operativi che eseguono l'app.

Nei sistemi operativi supportati, questa opzione ha l'effetto della modifica le chiamate a `LoadLibrary("dependent.dll")` per l'equivalente di `LoadLibraryEx("dependent.dll", 0, loadflags)`. Le chiamate a [LoadLibraryEx](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa) non sono interessate. Questa opzione non si applica in modo ricorsivo alla DLL caricate dall'app.

Questo flag è utilizzabile per impedire attacchi di impianto DLL. Ad esempio, se un'app Usa `LoadLibrary` per caricare una file DLL dipendente, un utente malintenzionato potrebbe prevede una DLL con lo stesso nome nel percorso di ricerca usato da `LoadLibrary`, ad esempio la directory corrente, che può essere verificata prima di directory di sistema se la modalità di ricerca DLL sicura è disabilitato. La modalità provvisoria ricerca DLL inserisce nella directory dell'utente corrente in seguito nell'ordine di ricerca e viene abilitata per impostazione predefinita in Windows XP SP2 e versioni successive. Per altre informazioni, vedere [ordine di ricerca della libreria di collegamento dinamico](/windows/desktop/Dlls/dynamic-link-library-search-order).

Se si specifica l'opzione di collegamento `/DEPENDENTLOADFLAG:0xA00` (il valore dei flag combinato `LOAD_LIBRARY_SEARCH_APPLICATION_DIR | LOAD_LIBRARY_SEARCH_SYSTEM32`), anche se la modalità di ricerca DLL provvisoria è disabilitata nel computer dell'utente, il percorso di ricerca DLL è limitato a directory protette sono più difficili per un utente malintenzionato modificare. Per informazioni sui flag disponibili e i relativi valori simbolici e numerici, vedere la *dwFlags* descrizione dei parametri nelle [LoadLibraryEx](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa).

### <a name="to-set-the-dependentloadflag-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker DEPENDENTLOADFLAG nell'ambiente di sviluppo Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione in **opzioni aggiuntive**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](setting-linker-options.md)
- [Opzioni del linker](linker-options.md)
- [Come collegare in modo implicito in una DLL](../linking-an-executable-to-a-dll.md#linking-implicitly)
- [Determinare quale metodo di collegamento da utilizzare](../linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)
- [LoadLibraryEx](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibraryexa)
- [Ordine di ricerca di libreria a collegamento dinamico](/windows/desktop/Dlls/dynamic-link-library-search-order)
