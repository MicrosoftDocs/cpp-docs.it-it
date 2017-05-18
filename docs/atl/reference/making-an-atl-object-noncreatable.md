---
title: Effettua un Noncreatable oggetto ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.objects
dev_langs:
- C++
helpviewer_keywords:
- noncreatable ATL objects
- ATL projects, noncreatable objects
ms.assetid: 80d0bca2-dea0-4801-9a85-6243124437f6
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 9ee276d86478bb4a7b6c9839378183bfd49533d6
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

---
# <a name="making-an-atl-object-noncreatable"></a>Effettua un Noncreatable oggetto ATL
È possibile modificare gli attributi di un oggetto basato su ATL COM in modo che un client non è possibile creare direttamente l'oggetto. In questo caso, l'oggetto potrebbe essere restituito tramite una chiamata al metodo su un altro oggetto anziché creato direttamente.  
  
### <a name="to-make-an-object-noncreatable"></a>Per rendere un noncreatable oggetto  
  
1.  Rimuovere il [OBJECT_ENTRY_AUTO](object-map-macros.md#object_entry_auto) per l'oggetto. Se si desidera che l'oggetto per il controllo deve essere registrato, è possibile sostituire OBJECT_ENTRY_AUTO con [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](object-map-macros.md#object_entry_non_createable_ex_auto).  
  
2.  Aggiungere il [noncreatable](../../windows/noncreatable.md) attributo coclasse nel file IDL. Ad esempio:  
  
 ```  
 [  
    uuid(A1992E3D-3CF0-11D0-826F-00A0C90F2851), 
    helpstring("MyObject"), 
    noncreatable]  
    coclass MyObject  
 {  
 [default] interface IMyInterface;  
 }  
 ```  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto di Visual C++](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti Desktop mediante creazioni guidate applicazione](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Nozioni di base di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)


