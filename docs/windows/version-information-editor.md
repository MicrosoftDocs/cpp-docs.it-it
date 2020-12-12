---
description: 'Ulteriori informazioni su: editor di informazioni sulla versione (C++)'
title: Editor delle informazioni sulla versione (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.version.F1
- vc.editors.version
helpviewer_keywords:
- Version Information editor [C++], about Version Information editor
- editors, Version Information
- resource editors [C++], Version Information editor
- version information resources [C++]
- resources [C++], editing version information
- languages, version information
- New Version Info Block
- blocks, adding
- resources [C++], adding version information
- version information, adding for languages
- blocks, deleting
- version information, deleting blocks
- resources [C++], deleting version information
- VerQueryValue
- version information, accessing from within programs
- GetFileVersionInfo
- version information
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
ms.openlocfilehash: e639db4fd0ec8ac6291be452c000a23246bac662
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283225"
---
# <a name="version-information-editor-c"></a>Editor delle informazioni sulla versione (C++)

Le informazioni sulla versione sono costituite dall'identificazione del prodotto e della società, da un numero di versione del prodotto e dalla notifica relativa al copyright e al marchio. Con l' **editor di informazioni sulla versione**, è possibile creare e gestire questi dati, archiviati nella risorsa di informazioni sulla versione. La risorsa di informazioni sulla versione non è richiesta da un'applicazione, ma è una posizione utile per raccogliere informazioni che identificano l'applicazione. Le informazioni sulla versione vengono usate anche dalle API di installazione.

> [!NOTE]
> Lo standard Windows prevede la presenza di una sola risorsa di versione, denominata VS_VERSION_INFO.

Una risorsa di informazioni sulla versione include un blocco superiore e uno o più blocchi inferiori: un unico blocco di informazioni fisse nella parte superiore e uno o più blocchi di informazioni sulla versione nella parte inferiore, per altre lingue e/o altri set di caratteri. Il blocco superiore presenta caselle numeriche modificabili ed elenchi a discesa in cui è possibile effettuare una selezione. I blocchi inferiori hanno solo caselle di testo modificabili.

> [!NOTE]
> Quando si usa l' **editor di informazioni sulla versione**, in molti casi è possibile fare clic con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. Se, ad esempio, si fa clic su una voce di intestazione del blocco, nel menu di scelta rapida vengono visualizzati i comandi **info Block Version** e **Delete Version Block info** .

## <a name="how-to"></a>Procedure

L' **editor di informazioni sulla versione** consente di:

### <a name="to-edit-a-string-in-a-version-information-resource"></a>Per modificare una stringa in una risorsa di informazioni sulla versione

Selezionare l'elemento una volta per sceglierlo, quindi di nuovo per iniziare a modificarlo. Apportare modifiche direttamente nella tabella **informazioni sulla versione** o nella [finestra Proprietà](/visualstudio/ide/reference/properties-window). Le modifiche verranno riflesse in entrambe le posizioni.

Quando si modifica la `FILEFLAGS` chiave nell' **Editor delle informazioni sulla versione**, si noti che non è possibile impostare le proprietà **debug**, **private build** o **Special Build** nella finestra **Proprietà** per i file RC:

- L' **editor di informazioni sulla versione** imposta la proprietà **debug** con un oggetto `#ifdef` nello script di risorsa, in base al `_DEBUG` flag di compilazione.

- Se la `Private Build` chiave ha un **valore** impostato nella tabella delle **informazioni sulla versione** , la proprietà di **compilazione privata** corrispondente nella finestra **Proprietà** della `FILEFLAGS` chiave sarà **true**. Se il **valore** è vuoto, la proprietà sarà **false**. Analogamente, la chiave di **compilazione speciale** nella tabella delle **informazioni sulla versione** è associata alla proprietà di **compilazione speciale** per la `FILEFLAGS` chiave.

È possibile ordinare la sequenza di informazioni del blocco di stringhe selezionando le intestazioni di colonna **chiave** o **valore** . Queste intestazioni riordinano automaticamente le informazioni nella sequenza selezionata.

### <a name="to-add-version-information-for-another-language-new-version-info-block"></a>Per aggiungere informazioni sulla versione per un'altra lingua (nuovo blocco di informazioni sulla versione)

1. Aprire una risorsa di informazioni sulla versione facendo doppio clic in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare clic con il pulsante destro del mouse nella tabella informazioni sulla versione e scegliere **nuovo blocco informazioni sulla versione**.

   Questo comando aggiunge un blocco di informazioni aggiuntive alla risorsa di informazioni sulla versione corrente e apre le proprietà corrispondenti nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

1. Nella finestra **Proprietà** , scegliere la lingua appropriata e il set di caratteri per il nuovo blocco.

### <a name="to-delete-a-version-information-block"></a>Per eliminare un blocco di informazioni sulla versione

1. Aprire la risorsa di informazioni sulla versione facendo doppio clic sull'icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare clic con il pulsante destro del mouse sull'intestazione del blocco che si desidera eliminare e scegliere **Elimina blocco informazioni sulla versione**.

   Questo comando Elimina l'intestazione selezionata e lascia invariate le altre informazioni sulla versione. Non è possibile annullare l'azione.

### <a name="to-access-version-information-from-within-your-program"></a>Per accedere alle informazioni sulla versione dal programma

Per accedere alle informazioni sulla versione dal programma, usare le funzioni [GetFileVersionInfo](/windows/win32/api/winver/nf-winver-getfileversioninfow) e [VerQueryValue](/windows/win32/api/winver/nf-winver-verqueryvaluew) .

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedi anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Menu e altre risorse](/windows/win32/menurc/resources)<br/>
[Informazioni sulla versione (Windows)](/windows/win32/menurc/version-information)
