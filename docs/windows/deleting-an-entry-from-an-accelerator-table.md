---
title: Eliminazione di una voce da una tabella di tasti di scelta rapida | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], deleting entries
- keyboard shortcuts [C++], deleting entry from accelerator table
ms.assetid: cc9cd499-dc04-4fe6-9393-a3e471e115a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0c191a2e37e4fe99c12486270c34a558cf4e8455
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605407"
---
# <a name="deleting-an-entry-from-an-accelerator-table"></a>Eliminazione di una voce da una tabella dei tasti di scelta rapida

### <a name="to-delete-an-entry-from-an-accelerator-table"></a>Per eliminare una voce da una tabella dei tasti di scelta rapida

1. Aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Selezionare la voce che si vuole eliminare. (Tenere premuto il **Ctrl** oppure **MAIUSC** chiave mentre si fa clic per selezionare più voci.)

3. Pulsante destro del mouse e scegliere **eliminare** dal menu di scelta rapida (o selezionare **eliminare** dal **Edit** menu).

\- oppure -

- Premere il **eliminare** chiave.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)