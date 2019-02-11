---
title: La modifica o eliminazione di simboli non assegnati
ms.date: 11/04/2016
f1_keywords:
- vc.editors.symbol.changing.unassigned
helpviewer_keywords:
- symbols [C++], unassigned
- Change Symbol dialog box [C++]
- unassigned symbols
- symbols [C++], deleting
ms.assetid: b6abee4a-3c24-4697-a166-fe6a86cad35f
ms.openlocfilehash: 47cc3d7a387092afe77fdbcf4bbdb6d085eeda25
ms.sourcegitcommit: 966e4466f10c93fc12faf33d28e03b39489423fc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2019
ms.locfileid: "55987014"
---
# <a name="changing-or-deleting-unassigned-symbols"></a>La modifica o eliminazione di simboli non assegnati

Durante la [nella finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md), è possibile modificare o eliminare i simboli esistenti che non sono già assegnati a una risorsa o oggetto.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*.

## <a name="to-change-an-unassigned-symbol"></a>Per modificare un simbolo non assegnato

1. Nel **Name** casella, selezionare il simbolo non assegnato e scegliere **modifica**.

1. Modifica nome del simbolo o il valore nelle caselle disponibili nel **Cambia simbolo** nella finestra di dialogo.

   > [!NOTE]
   > Per modificare un simbolo che *viene* assegnato a una risorsa o oggetto, è necessario usare l'editor di risorse o **proprietà** finestra. Per altre informazioni, vedere [modifica un simbolo o del nome del simbolo](../windows/changing-a-symbol-or-symbol-name-id.md).

## <a name="to-delete-an-unassigned-unused-symbol"></a>Per eliminare un simbolo non assegnato (non usato)

Nel [finestra di dialogo Simboli risorsa](../windows/resource-symbols-dialog-box.md), selezionare il simbolo che si desidera eliminare e scegliere **eliminare**.

   > [!NOTE]
   > Prima di eliminare un simbolo non usato in un file di risorse, verificare che non venga usato in un punto del programma o da file di risorse inclusi in fase di compilazione.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Visualizzazione di simboli risorsa](../windows/viewing-resource-symbols.md)<br/>
[Restrizioni relative ai nomi dei simboli](../windows/symbol-name-restrictions.md)<br/>
[Restrizioni relative ai valori dei simboli](../windows/symbol-value-restrictions.md)<br/>
[ID simbolo predefiniti](../windows/predefined-symbol-ids.md)