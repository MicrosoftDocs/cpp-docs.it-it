---
title: Tipi di File modificabili per le risorse (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.resource
helpviewer_keywords:
- file types [C++], for resources
- resources [C++], editing
- files [C++], editable types
- resource editing
ms.assetid: c40f9204-f2f2-400b-9f53-53b7bf291356
ms.openlocfilehash: 9f688c144a3453c2de849b36f34f6a465e3dfeae
ms.sourcegitcommit: 5a7dbd640376e13379f5d5b2cf66c4842e5e737b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/08/2019
ms.locfileid: "55905719"
---
# <a name="editable-file-types-for-resources-c"></a>Tipi di File modificabili per le risorse (C++)

È possibile aprire i seguenti tipi di file e modificare le risorse contenute.

|Nome file|Descrizione|
|---------------|-----------------|
|RC|File script di risorsa.|
|RCT|File modello di risorse.|
|RES|File di risorse.|
|.resx|File di risorse gestite.|
|EXE|File eseguibili.|
|DLL|File DLL.|
|BMP, ICO, DIB e CUR|File bitmap, icona, della barra degli strumenti e cursore.|

## <a name="files-affected-by-resource-editing"></a>File interessati dalla modifica delle risorse

L'ambiente di Visual Studio funziona con i file illustrati nella tabella seguente durante la sessione di modifica delle risorse.

|Nome file|Descrizione|
|---------------|-----------------|
|Resource.h|File di intestazione generato dall'ambiente di sviluppo; contiene le definizioni dei simboli. (Include questo file nel controllo del codice sorgente).|
|Nomefile.aps|Versione binaria del file di script di risorsa corrente; usato per il caricamento rapido.<br /><br /> Gli editor di risorse non leggono direttamente i file RC o resource.h. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [tra cui le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md). (In genere, è necessario non includere file APS nel controllo del codice sorgente.)|
|RC|File di script di risorsa che contiene lo script per le risorse nel progetto corrente. Questo file viene sovrascritto dal file APS ogni volta che si salva. (Include questo file nel controllo del codice sorgente).|

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)