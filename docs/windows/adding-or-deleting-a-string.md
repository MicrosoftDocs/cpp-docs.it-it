---
title: Aggiunta o eliminazione di una stringa | Documenti Microsoft
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
- string tables, deleting strings
- strings [C++], deleting in string tables
- string tables, adding strings
ms.assetid: 077077b4-0f4b-4633-92d6-60b321164cab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e15e29c99dba89ef29ba5b909c62f819bedf63f4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="adding-or-deleting-a-string"></a>Aggiunta o eliminazione di una stringa
È possibile inserire rapidamente nuove voci nella tabella di stringhe utilizzando l'editor di stringa. Le nuove stringhe vengono inserite alla fine della tabella e vengono assegnate il successivo identificatore disponibile. È quindi possibile modificare le proprietà ID, Value o Caption nel [finestra proprietà](/visualstudio/ide/reference/properties-window) in base alle esigenze.  
  
 L'editor di stringa assicura che non si utilizza un ID che è già in uso. Se si seleziona un ID già in uso, l'editor di stringa verrà ricevere una notifica e quindi assegnare un ID univoco generico, ad esempio IDS_STRING58113.  
  
### <a name="to-add-a-string-table-entry"></a>Per aggiungere una voce della tabella di stringhe  
  
1.  Aprire la tabella di stringhe facendo doppio clic sull'icona in [visualizzazione risorse](../windows/resource-view-window.md).  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Fare doppio clic all'interno della tabella di stringhe e scegliere **nuova stringa** dal menu di scelta rapida.  
  
3.  Nel **stringa** editor, selezionare un **ID** dall'elenco di ID elenco a discesa o digitare un ID direttamente sul posto.  
  
4.  Modificare il **valore**, se necessario.  
  
5.  Digitare una voce per il **didascalia**.  
  
    > [!NOTE]
    >  Le stringhe null non sono consentite nelle tabelle di stringhe di Windows. Se si crea una voce nella tabella di stringhe che è una stringa null, si riceverà un messaggio che chiede di "Immettere una stringa per la voce della tabella".  
  
### <a name="to-delete-a-string-table-entry"></a>Per eliminare una voce della tabella di stringhe  
  
1.  Selezionare la voce che si vuole eliminare.  
  
2.  Nel **modifica** menu, fare clic su **eliminare**.  
  
 \- oppure -  
  
-   Fare clic sulla stringa di cui si desidera eliminare e scegliere **eliminare** dal menu di scelta rapida.  
  
 \- oppure -  
  
-   Premere il **eliminare** chiave.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti (quelli destinati a common language runtime), vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* . Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 **Requisiti**  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor stringhe](../windows/string-editor.md)   

