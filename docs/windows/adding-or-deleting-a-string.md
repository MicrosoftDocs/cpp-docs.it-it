---
title: Aggiunta o eliminazione di una risorsa di tipo stringa (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.string
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], adding to string tables
- string tables [C++], deleting strings
- strings [C++], deleting in string tables
- string tables [C++], adding strings
ms.assetid: 077077b4-0f4b-4633-92d6-60b321164cab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b3800a99a6c3ae22b34f1c70a7a688ae523b7a67
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50061641"
---
# <a name="adding-or-deleting-a-string-resource-c"></a>Aggiunta o eliminazione di una risorsa di tipo stringa (C++)

È possibile inserire rapidamente le nuove voci nella tabella stringa tramite il **stringa** editor. Nuove stringhe vengono posizionate alla fine della tabella e vengono assegnate l'identificatore successivo disponibile. È quindi possibile modificare il **ID**, **valore**, o **didascalia** le proprietà nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in base alle esigenze.

Il **stringa** editor garantisce che non si usa un ID che è già in uso. Se si seleziona un ID già in uso, il **stringa** editor sarà ricevere una notifica e quindi assegnare un ID univoco di tipo generico, ad esempio `IDS_STRING58113`.

### <a name="to-add-a-string-table-entry"></a>Per aggiungere una voce di tabella di stringhe

1. Aprire la tabella di stringhe facendo doppio clic sull'icona nel [visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Fare doppio clic all'interno della tabella di stringhe e scegliere **NewString** dal menu di scelta rapida.

3. Nel **stringa** editor, selezionare un' **ID** dall'elenco di ID elenco a discesa o digitare ID direttamente posto.

4. Modificare il **valore**, se necessario.

5. Digitare una voce per il **didascalia**.

   > [!NOTE]
   > Stringhe null non sono consentite nelle tabelle di stringhe di Windows. Se si crea una voce nella tabella di stringhe che è una stringa null, si riceverà un messaggio che chiede di "Immettere una stringa per questa voce di tabella".

### <a name="to-delete-a-string-table-entry"></a>Per eliminare una voce della tabella di stringhe

1. Selezionare la voce che si vuole eliminare.

2. Nel **Edit** menu, fare clic su **eliminare**.

\- oppure -

- Fare doppio clic la stringa di cui si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.

\- oppure -

- Premere il **eliminare** chiave.

Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](/previous-versions/visualstudio/visual-studio-2010/y99d1cd3).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor stringhe](../windows/string-editor.md)