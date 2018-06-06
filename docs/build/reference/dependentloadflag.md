---
title: / DEPENDENTLOADFLAG (Set predefinito dipendente carico flag)
description: L'opzione /DEPENDENTLOADFLAG imposta flag predefiniti per le DLL caricate usando LoadLibrary
ms.custom: ''
ms.date: 05/18/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- dependentloadflag
dev_langs:
- C++
helpviewer_keywords:
- LINK tool [C++], dependent load flags
- -DEPENDENTLOADFLAG linker option
- linker [C++], DEPENDENTLOADFLAG
- DEPENDENTLOADFLAG linker option
- /DEPENDENTLOADFLAG linker option
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5a171f3c2edbbbf614a986ff78dd2405e734a1d1
ms.sourcegitcommit: d1f576a0f59678edc3d93508cf46485138332178
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34753710"
---
# <a name="dependentloadflag-set-default-dependent-load-flags"></a>/ DEPENDENTLOADFLAG (Set predefinito dipendente carico flag)

Imposta i flag di carico predefinito utilizzato quando `LoadLibrary` viene usato per caricare le DLL.

## <a name="syntax"></a>Sintassi

> **/ DEPENDENTLOADFLAG**[**:**_loadflags_]

### <a name="arguments"></a>Argomenti

|||
|-|-|
*loadflags*|Un valore integer a 16 bit "C"-style facoltativo in decimali, ottali con uno zero iniziale o esadecimale con iniziali `0x`, che specifica i flag di caricamento dipendente da applicare a tutti [LoadLibrary](https://go.microsoft.com/fwlink/p/?LinkID=259187) chiamate. Il valore predefinito è 0.

## <a name="remarks"></a>Note

Questa opzione è stata introdotta in Visual Studio 2017 e si applica solo alle App in esecuzione in gruppi di risultati 1 di Windows 10 e versioni successive. Questa opzione viene ignorata da altri sistemi operativi che eseguono l'app.

Nei sistemi operativi supportati, questa opzione ha l'effetto delle chiamate a `LoadLibrary("dependent.dll")` sull'equivalente della `LoadLibraryEx("dependent.dll", 0, loadflags)`. Le chiamate a [LoadLibraryEx](https://go.microsoft.com/fwlink/p/?LinkID=236091) non sono interessate. Questa opzione non si applica in modo ricorsivo a DLL caricate dall'app.

Questo flag è utilizzabile per impedire attacchi di impianto DLL. Se, ad esempio, un'app Usa `LoadLibrary` per caricare una DLL dipendente, un utente malintenzionato è stato possibile pianificare una DLL con lo stesso nome nel percorso di ricerca utilizzato da `LoadLibrary`, ad esempio la directory corrente, che potrebbe essere verificato prima della directory di sistema se la modalità di ricerca DLL provvisoria è disabilitato. Modalità di ricerca DLL provvisoria colloca della directory dell'utente corrente in un secondo momento nell'ordine di ricerca ed è abilitata per impostazione predefinita in Windows XP SP2 e versioni successive. Per altre informazioni, vedere [ordine di ricerca della libreria di collegamento dinamico](https://msdn.microsoft.com/library/windows/desktop/ms682586.aspx).

Se si specifica l'opzione di collegamento `/DEPENDENTLOADFLAG:0xA00` (il valore dei flag combinato `LOAD_LIBRARY_SEARCH_APPLICATION_DIR | LOAD_LIBRARY_SEARCH_SYSTEM32`), anche se la modalità di ricerca DLL provvisoria è disabilitata nel computer dell'utente, è limitato a directory protette che sono più difficili di un attacco per il percorso di ricerca DLL modifica. Per informazioni sui flag disponibili e i relativi valori simbolici e numerici, vedere la *dwFlags* descrizione del parametro nel [LoadLibraryEx](https://go.microsoft.com/fwlink/p/?LinkID=236091).

### <a name="to-set-the-dependentloadflag-linker-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del linker DEPENDENTLOADFLAG nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere l'opzione in **opzioni aggiuntive**.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](setting-linker-options.md)
- [Opzioni del linker](linker-options.md)
- [Come collegare in modo implicito a una DLL](../linking-an-executable-to-a-dll.md#linking-implicitly)
- [Determinare quale metodo di collegamento](../linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)
- [LoadLibrary](https://go.microsoft.com/fwlink/p/?LinkID=259187)
- [LoadLibraryEx](https://go.microsoft.com/fwlink/p/?LinkID=236091)
- [Ordine di ricerca di libreria a collegamento dinamico](https://msdn.microsoft.com/library/windows/desktop/ms682586.aspx)
