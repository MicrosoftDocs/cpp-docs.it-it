---
title: 'Procedura: aprire un File di Script di risorsa in formato testo (C++)'
ms.date: 11/04/2016
f1_keywords:
- vc.editors.resource
helpviewer_keywords:
- resource script files [C++], opening in text format
- .rc files [C++], opening in text format
- rc files [C++], opening in text format
ms.assetid: 0bc57527-f53b-40c9-99a9-4dcbc5c9af57
ms.openlocfilehash: b69eba46fb5420b8e64d87737270a09fb932b020
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50543091"
---
# <a name="how-to-open-a-resource-script-file-in-text-format"></a>Procedura: aprire un file di script di risorsa in formato testo

Talvolta può essere utile visualizzare il contenuto del file di script di risorsa (RC) del progetto senza aprire una risorsa, quale una finestra di dialogo, all'interno dell'editor di risorse specifico. È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

È possibile aprire il file di risorse con facilità in formato testo per visualizzare tutte le risorse contenute ed eseguire le operazioni globali supportate dall'editor di testo.

> [!NOTE]
> Editor di risorse non leggono direttamente RC o `resource.h` file. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [tra cui le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).

### <a name="to-open-a-resource-script-file-as-text"></a>Per aprire un file script di risorsa in formato testo

1. Dal **File** dal menu **Open**, quindi fare clic su **File.**

2. Nel **Apri File** finestra di dialogo passare al file di script di risorse che si desidera visualizzare in formato testo.

3. Evidenziare il file, quindi fare clic sulla freccia giù sul **aperto** pulsante (che si trova a destra del pulsante).

4. Scegli **aperta con** dal menu di riepilogo a discesa.

5. Nel **Apri con** finestra di dialogo, fare clic su **Editor di codice sorgente (testo)**.

6. Dal **aperto come** elenco a discesa, seleziona **testo**.

   La risorsa viene aperta nel **codice sorgente** editor.

\- oppure -

1. Nelle **Esplora soluzioni**, fare clic sul file RC.

2. Dal menu di scelta rapida, scegliere **Apri con...** , quindi selezionare **Editor di codice sorgente (testo)**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)