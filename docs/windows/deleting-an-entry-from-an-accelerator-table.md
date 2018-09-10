---
title: Eliminazione di una voce da una tabella di tasti di scelta rapida (C++) | Microsoft Docs
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
ms.openlocfilehash: 747e0db32a73a277ef26e18e787e3e5a31f69578
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44315119"
---
# <a name="deleting-an-entry-from-an-accelerator-table-c"></a>Eliminazione di una voce da una tabella di tasti di scelta rapida (C++)

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