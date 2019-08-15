---
title: /INTEGRITYCHECK (richiede controllo della firma)
ms.date: 11/04/2016
ms.assetid: 9e738825-2c98-40cd-8ad2-5d0d9c14893e
ms.openlocfilehash: 1732c612501b66753635b272f94764975c555f75
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492842"
---
# <a name="integritycheck-require-signature-check"></a>/INTEGRITYCHECK (richiede controllo della firma)

Specifica che la firma digitale dell'immagine binaria deve essere controllata in fase di caricamento.

```
/INTEGRITYCHECK[:NO]
```

## <a name="remarks"></a>Note

Per impostazione predefinita, **/INTEGRITYCHECK** è disattivato.

L'opzione **/INTEGRITYCHECK** imposta, nell'intestazione PE del file dll o del file eseguibile, un flag per il gestore della memoria per verificare la presenza di una firma digitale al fine di caricare l'immagine in Windows. Questa opzione deve essere impostata sia per le dll a 32 bit sia per quelle a 64 bit che implementano il codice in modalità kernel caricato da determinate funzionalità di Windows ed è consigliata per tutti i driver di dispositivo in Windows Vista, Windows 7, Windows 8, Windows Server 2008 e Windows Server 2012. Le versioni di Windows precedenti a Windows Vista ignorano questo flag. Per altre informazioni, vedere [firma dell'integrità forzata dei file eseguibili di tipo PE](https://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx).

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **riga di comando** .

1. In **Opzioni aggiuntive**immettere `/INTEGRITYCHECK` o `/INTEGRITYCHECK:NO`.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[Firma dell'integrità forzata dei file eseguibili portabili (PE)](https://social.technet.microsoft.com/wiki/contents/articles/255.forced-integrity-signing-of-portable-executable-pe-files.aspx)<br/>
[Requisiti per la firma del codice in modalità kernel](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-)<br/>
[AppInit dll e avvio protetto](/windows/win32/dlls/secure-boot-and-appinit-dlls)
