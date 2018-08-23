---
title: Spostare o copiare una voce della tabella di tasti di scelta rapida in un altro File di Script di risorsa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], copying entries
- rc files, moving an accelerator table entry
- .rc files, moving accelerator table entries
- accelerator tables [C++], moving entries
ms.assetid: 7b4dc149-c972-4ab2-8477-76c52b6feb5b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f419f9c370c58c1e3ebf07d3b78f15499a072d4e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42603498"
---
# <a name="moving-or-copying-an-accelerator-table-entry-to-another-resource-script-file"></a>Spostamento o copia di una voce di una tabella dei tasti di scelta rapida in un altro file di script di risorsa

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

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)