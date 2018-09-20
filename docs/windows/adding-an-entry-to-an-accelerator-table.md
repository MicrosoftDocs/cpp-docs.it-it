---
title: Aggiunta di una voce a una tabella di tasti di scelta rapida (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- accelerator tables [C++], adding entries
- New Accelerator command
ms.assetid: 559c2415-8323-4339-9447-6966665f8288
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0e0017e0c4d5462ef985b70b44120ff20066f626
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391800"
---
# <a name="adding-an-entry-to-an-accelerator-table-c"></a>Aggiunta di una voce a una tabella di tasti di scelta rapida (C++)

### <a name="to-add-an-entry-to-an-accelerator-table"></a>Per aggiungere una voce a una tabella dei tasti di scelta rapida

1. In un progetto C++, aprire la tabella di tasti di scelta rapida facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Fare doppio clic all'interno della tabella di tasti di scelta rapida e scegliere **nuovo Accelerator** dal menu di scelta rapida o fare clic sulla riga vuota nella parte inferiore della tabella.

3. Selezionare un [ID](id-property.md) dall'elenco a discesa scegliere l'ID casella o digitare un nuovo ID nel **ID** casella.

4. Tipo di [Key](../windows/accelerator-key-property.md) si vuole usare come un tasto di scelta rapida o il pulsante destro del mouse e scegliere **digita** dal menu di scelta rapida per impostare una combinazione di tasti (il **digita** comando è disponibile anche dal **modifica** menu).

5. Modifica il [modificatore](../windows/accelerator-modifier-property.md) e [tipo](../windows/accelerator-type-property.md), se necessario.

6. Premere **INVIO**.

   > [!NOTE]
   > Verificare che tutti gli acceleratori definiti siano univoci. È possibile avere assegnate allo stesso ID senza alcun effetto negativi, ad esempio, diverse combinazioni di tasti **Ctrl** + **P** e **F8** possono entrambi essere assegnati a ID_PRINT. Tuttavia, con una combinazione di tasti assegnata a più ID non è compatibile, ad esempio, **Ctrl** + **Z** assegnato a che a ID_THESAURUS.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Modifica delle tabelle dei tasti di scelta rapida](../windows/editing-accelerator-tables.md)<br/>
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)