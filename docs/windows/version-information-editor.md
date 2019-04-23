---
title: Editor di informazioni sulla versione (C++)
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
ms.openlocfilehash: 7910522578d89657adb09eb7729eb7539e010027
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59027650"
---
# <a name="version-information-editor-c"></a>Editor di informazioni sulla versione (C++)

Le informazioni sulla versione sono costituite dall'identificazione del prodotto e della società, da un numero di versione del prodotto e dalla notifica relativa al copyright e al marchio. Con il **Editor di informazioni sulla versione**, si creano e gestiscono questi dati, che viene archiviati nella risorsa di informazioni della versione. La risorsa di informazioni sulla versione non è richiesto da un'applicazione, ma è uno strumento utile per raccogliere le informazioni che identificano l'applicazione. Le informazioni sulla versione vengono usate anche dalle API di installazione.

> [!NOTE]
> Lo standard Windows prevede la presenza di una sola risorsa di versione, denominata VS_VERSION_INFO.

Una risorsa di informazioni sulla versione include un blocco superiore e uno o più blocchi inferiori: un unico blocco di informazioni fisse nella parte superiore e uno o più blocchi di informazioni sulla versione nella parte inferiore, per altre lingue e/o altri set di caratteri. Il blocco superiore presenta caselle numeriche modificabili ed elenchi a discesa in cui è possibile effettuare una selezione. I blocchi inferiori hanno solo caselle di testo modificabili.

> [!NOTE]
> Quando si usa la **Editor di informazioni sulla versione**, in molti casi è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. Ad esempio, se si seleziona mentre si punta a una voce di intestazione di blocco, il menu di scelta rapida viene illustrato il **nuovo blocco informazioni sulla versione** e **Elimina blocco informazioni sulla versione** comandi.

## <a name="how-to"></a>Procedure

Il **Editor di informazioni sulla versione** consente di:

### <a name="to-edit-a-string-in-a-version-information-resource"></a>Per modificare una stringa in una risorsa di informazioni sulla versione

Selezionare una sola volta l'elemento per selezionarlo, quindi nuovamente per iniziare a modificarlo. Apportare modifiche direttamente nel **le informazioni sulla versione** tabella o nella [finestra proprietà](/visualstudio/ide/reference/properties-window). Le modifiche verranno riflesse in entrambe le posizioni.

Quando si modifica il `FILEFLAGS` chiavi nel **Editor di informazioni sulla versione**, si noti che non è possibile impostare il **Debug**, **Private Build**, o **Special Build**  le proprietà di **proprietà** finestra per i file con estensione RC:

   - Il **Editor di informazioni sulla versione** imposta la **Debug** proprietà con un `#ifdef` nello script della risorsa, in base il `_DEBUG` flag di compilazione.

  - Se il `Private Build` chiave ha un **valore** impostata **informazioni sulla versione** tabella corrispondente **Private Build** proprietà nel **proprietà**  finestra per il `FILEFLAGS` chiave verrà **True**. Se **valore** è vuoto, la proprietà sarà **False**. Allo stesso modo, il **Special Build** chiave nel **informazioni sulla versione** tabella è associata ai **Special Build** proprietà per il `FILEFLAGS` chiave.

È possibile ordinare la sequenza di informazioni di blocco di stringhe selezionando il **chiave** o il **valore** le intestazioni di colonna. Queste intestazioni riordinano automaticamente le informazioni nella sequenza selezionata.

### <a name="to-add-version-information-for-another-language-new-version-info-block"></a>Per aggiungere le informazioni sulla versione per un'altra lingua (nuovo blocco di informazioni sulla versione)

1. Aprire una risorsa di informazioni sulla versione facendo doppio clic in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare doppio clic all'interno della tabella di informazioni di versione e scegliere **nuovo blocco informazioni sulla versione**.

   Questo comando aggiunge un blocco di informazioni aggiuntive alla risorsa di informazioni sulla versione corrente e apre le proprietà corrispondenti nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

1. Nella finestra **Proprietà** , scegliere la lingua appropriata e il set di caratteri per il nuovo blocco.

### <a name="to-delete-a-version-information-block"></a>Per eliminare un blocco di informazioni sulla versione

1. Aprire la risorsa di informazioni sulla versione facendo doppio clic sull'icona in [Visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources).

1. Fare doppio clic su intestazione del blocco da eliminare e scegliere **Elimina blocco informazioni sulla versione**.

   Questo comando Elimina l'intestazione selezionata e lascia intatto il resto di informazioni sulla versione. È possibile annullare l'azione.

### <a name="to-access-version-information-from-within-your-program"></a>Per accedere alle informazioni sulla versione dal programma

Per accedere alle informazioni sulla versione dal programma, usare le funzioni [GetFileVersionInfo](/windows/desktop/api/winver/nf-winver-getfileversioninfoa) e [VerQueryValue](/windows/desktop/api/winver/nf-winver-verqueryvaluea) .

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
<!--
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)<br/>
[Version Information (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)-->
