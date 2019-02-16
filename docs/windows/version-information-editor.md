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
ms.openlocfilehash: 8420feb6ddde116a24bee5333f4ef8f83ff4e0d4
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320471"
---
# <a name="version-information-editor-c"></a>Editor di informazioni sulla versione (C++)

Le informazioni sulla versione sono costituite dall'identificazione del prodotto e della società, da un numero di versione del prodotto e dalla notifica relativa al copyright e al marchio. Con il **le informazioni sulla versione** editor, si creano e gestiscono questi dati, che viene archiviati nella risorsa di informazioni della versione. La risorsa di informazioni sulla versione non è richiesto da un'applicazione, ma è uno strumento utile per raccogliere le informazioni che identificano l'applicazione. Le informazioni sulla versione vengono usate anche dalle API di installazione.

Una risorsa di informazioni sulla versione include un blocco superiore e uno o più blocchi inferiori: un unico blocco di informazioni fisse nella parte superiore e uno o più blocchi di informazioni sulla versione nella parte inferiore, per altre lingue e/o altri set di caratteri. Il blocco superiore presenta caselle numeriche modificabili ed elenchi a discesa in cui è possibile effettuare una selezione. I blocchi inferiori hanno solo caselle di testo modificabili.

> [!NOTE]
> Lo standard Windows prevede la presenza di una sola risorsa di versione, denominata VS_VERSION_INFO.

## <a name="how-to"></a>Procedure

Il **le informazioni sulla versione** editor consente di:

### <a name="to-edit-a-string-in-a-version-information-resource"></a>Per modificare una stringa in una risorsa di informazioni sulla versione

Selezionare una sola volta l'elemento per selezionarlo, quindi nuovamente per iniziare a modificarlo. Apportare le modifiche direttamente nel **le informazioni sulla versione** tabella o nella [finestra proprietà](/visualstudio/ide/reference/properties-window). Le modifiche verranno riflesse in entrambe le posizioni.

Quando si modifica il `FILEFLAGS` chiavi nel **informazioni sulla versione** editor, si noterà che non è possibile impostare il **Debug**, **Private Build**, o **speciali Compilare** delle proprietà (nelle **proprietà** finestra) per i file con estensione RC:

- Il **le informazioni sulla versione** editor imposta il **eseguire il Debug** proprietà con un `#ifdef` nello script della risorsa, in base il `_DEBUG` flag di compilazione.

- Se il `Private Build` chiave ha un **valore** impostata **informazioni sulla versione** tabella corrispondente **Private Build** proprietà (nel **proprietà**  finestra) per il `FILEFLAGS` chiave verrà **True**. Se **Valore** è vuoto, la proprietà sarà **False**. Allo stesso modo, il **Special Build** chiave (nel **informazioni sulla versione** tabella) è associata ai **Special Build** proprietà per il `FILEFLAGS` chiave.

È possibile ordinare la sequenza di informazioni di blocco di stringhe scegliendo il **Key** o il **valore** le intestazioni di colonna. Queste intestazioni riordinano automaticamente le informazioni nella sequenza selezionata.

### <a name="to-add-version-information-for-another-language-new-version-info-block"></a>Per aggiungere le informazioni sulla versione per un'altra lingua (nuovo blocco di informazioni sulla versione)

1. Aprire una risorsa di informazioni sulla versione facendo doppio clic in [Visualizzazione risorse](../windows/resource-view-window.md).

1. Fare clic con il pulsante destro del mouse all'interno della tabella di informazioni sulla versione e scegliere **Nuovo blocco informazioni sulla versione** dal menu di scelta rapida.

   Questo comando aggiunge un blocco di informazioni aggiuntive alla risorsa di informazioni sulla versione corrente e apre le proprietà corrispondenti nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

1. Nella finestra **Proprietà** , scegliere la lingua appropriata e il set di caratteri per il nuovo blocco.

### <a name="to-delete-a-version-information-block"></a>Per eliminare un blocco di informazioni sulla versione

1. Aprire la risorsa di informazioni sulla versione facendo doppio clic sull'icona in [Visualizzazione risorse](../windows/resource-view-window.md).

1. Fare clic con il pulsante destro del mouse sull'intestazione del blocco da eliminare, quindi scegliere **Elimina blocco informazioni sulla versione** dal menu di scelta rapida.

   Questo comando Elimina l'intestazione selezionata e lascia intatto il resto di informazioni sulla versione. È possibile annullare l'azione.

### <a name="to-access-version-information-from-within-your-program"></a>Per accedere alle informazioni sulla versione dal programma

Per accedere alle informazioni sulla versione dal programma, usare le funzioni [GetFileVersionInfo](/windows/desktop/api/winver/nf-winver-getfileversioninfoa) e [VerQueryValue](/windows/desktop/api/winver/nf-winver-verqueryvaluea) .

   > [!NOTE]
   > Quando si usa la **le informazioni sulla versione** editor, in molti casi è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. Ad esempio, se si seleziona mentre si punta a una voce di intestazione di blocco, il menu di scelta rapida viene illustrato il **nuovo blocco informazioni sulla versione** e **Elimina blocco informazioni sulla versione** comandi.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Menu e altre risorse](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)<br/>
[Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)
