---
title: Spostare o copiare una voce della tabella di tasti di scelta rapida in un altro File di Script di risorsa (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], copying entries
- rc files [C++], moving an accelerator table entry
- .rc files [C++], moving accelerator table entries
- accelerator tables [C++], moving entries
ms.assetid: 7b4dc149-c972-4ab2-8477-76c52b6feb5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0d3f75ef8c2820c227716e3208ff2cded54d1fd7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46414732"
---
# <a name="moving-or-copying-an-accelerator-table-entry-to-another-resource-script-file-c"></a>Spostare o copiare una voce della tabella di tasti di scelta rapida in un altro File di Script di risorsa (C++)

### <a name="to-move-or-copy-an-accelerator-table-entry-to-another-resource-script-file"></a>Per spostare o copiare una voce di una tabella dei tasti di scelta rapida in un altro file di script di risorsa

1. Aprire le tabelle di tasti di scelta rapida in entrambi i file script di risorsa.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare la voce che si vuole spostare.

3. Dal **modifica** menu, scegliere **copia** oppure **Taglia**.

4. Selezionare una voce nel file script di risorsa di destinazione.

5. Dal **Edit** menu, scegliere **Incolla**.

   > [!NOTE]
   > È anche possibile usare le combinazioni di tasti per copiare e incollare.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)<br/>
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)