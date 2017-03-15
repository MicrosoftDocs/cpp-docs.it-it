---
title: Rendendo Noncreatable un oggetto ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: b812c2d4bfeb0663d62051c05829f25dc7139faf
ms.lasthandoff: 02/24/2017

---
# <a name="making-an-atl-object-noncreatable"></a>Rendendo Noncreatable un oggetto ATL
È possibile modificare gli attributi di un oggetto COM basati su ATL in modo che un client non possa creare direttamente l'oggetto. In questo caso, l'oggetto potrebbe essere restituito tramite una chiamata al metodo su un altro oggetto anziché creare direttamente.  
  
### <a name="to-make-an-object-noncreatable"></a>Per rendere un noncreatable oggetto  
  
1.  Rimuovere il [OBJECT_ENTRY_AUTO](http://msdn.microsoft.com/library/5a0f4fa5-0905-43d2-b337-e22f979c9e4c) per l'oggetto. Se si desidera che l'oggetto per il controllo da registrare, è possibile sostituire OBJECT_ENTRY_AUTO con [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](http://msdn.microsoft.com/library/abdc093c-6502-42de-8419-b7ebf45299d1).  
  
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
 [Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti Desktop tramite le creazioni guidate applicazione](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [Configurazioni predefinite progetto ATL](../../atl/reference/default-atl-project-configurations.md)


