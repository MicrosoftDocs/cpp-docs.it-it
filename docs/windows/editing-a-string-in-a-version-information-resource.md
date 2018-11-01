---
title: Modifica di una stringa in una risorsa di informazioni di versione (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.version
helpviewer_keywords:
- version information resources [C++]
- resources [C++], editing version information
ms.assetid: d3a7d4e4-7d31-47c2-902c-f50b8404ba4f
ms.openlocfilehash: 75d41444d685b067b57aa78aee944ee005da5d3b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50476427"
---
# <a name="editing-a-string-in-a-version-information-resource-c"></a>Modifica di una stringa in una risorsa di informazioni di versione (C++)

### <a name="to-edit-a-string-in-a-version-information-resource"></a>Per modificare una stringa in una risorsa di informazioni sulla versione

1. Fare clic sull'elemento per selezionarlo, quindi fare di nuovo clic per iniziare a modificarlo. Apportare le modifiche direttamente nel **le informazioni sulla versione** tabella o nella [finestra proprietà](/visualstudio/ide/reference/properties-window). Le modifiche verranno riflesse in entrambe le posizioni.

   > [!NOTE]
   > Quando si modifica il `FILEFLAGS` chiavi nel **informazioni sulla versione** editor, si noterà che non è possibile impostare il **Debug**, **Private Build**, o **speciali Compilare** delle proprietà (nelle **proprietà** finestra) per i file con estensione RC:

   - Il **le informazioni sulla versione** editor imposta il **eseguire il Debug** proprietà con un `#ifdef` nello script della risorsa, in base il `_DEBUG` flag di compilazione.

   - Se il `Private Build` chiave ha un **valore** impostata **informazioni sulla versione** tabella corrispondente **Private Build** proprietà (nel **proprietà**  finestra) per il `FILEFLAGS` chiave verrà **True**. Se **Valore** è vuoto, la proprietà sarà **False**. Allo stesso modo, il **Special Build** chiave (nel **informazioni sulla versione** tabella) è associata ai **Special Build** proprietà per il `FILEFLAGS` chiave.

È possibile ordinare la sequenza di informazioni del blocco di stringhe facendo clic sull'intestazione di colonna Chiave o Valore. Queste intestazioni riordinano automaticamente le informazioni nella sequenza selezionata.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di informazioni sulla versione](../windows/version-information-editor.md)<br/>
[Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)