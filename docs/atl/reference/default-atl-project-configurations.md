---
title: Le configurazioni di progetto ATL predefinite | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ATL projects, default configurations
ms.assetid: 7e272722-41af-4330-b965-a6d74ec16880
caps.latest.revision: 11
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
ms.sourcegitcommit: 6cad5222fb0d97594d5b13b5cf8903eb2934ee88
ms.openlocfilehash: 41ab65c411bef478d063e5165d3167f58ace37d7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="default-atl-project-configurations"></a>Configurazioni predefinite progetto ATL
Questo argomento vengono confrontate le configurazioni di progetto ATL predefinito in Visual C++ .NET con le configurazioni predefinite in Visual C++ 6.0.  
  
## <a name="visual-c-net-default-configurations"></a>Configurazioni predefinite di Visual C++ .NET  
 In Visual C++ .NET, la creazione guidata progetto ATL crea due configurazioni di progetto per impostazione predefinita.  
  
### <a name="visual-c-net-configurations"></a>Configurazioni di .NET in Visual C++  
  
|Configurazione|Set di caratteri|Uso di ATL|  
|-------------------|-------------------|----------------|  
|Versione|MBCS|DLL|  
|Debug|MBCS|DLL|  
  
 **Set di caratteri**, **uso di ATL** e può essere modificato nel **le impostazioni di progetto** nella finestra di dialogo di **generale** scheda. È inoltre possibile aggiungere configurazioni personalizzate utilizzando Gestione configurazione. Per informazioni dettagliate, vedere [configurazioni di compilazione](/visualstudio/ide/understanding-build-configurations).  
  
## <a name="version-60-default-configurations"></a>Configurazioni predefinite versione 6.0  
 In Visual C++ versione 6.0, la creazione guidata applicazioni COM di ATL (ora denominato Creazione guidata progetto ATL) create sei configurazioni di progetto per impostazione predefinita. Le configurazioni sono diverse varianti della versione, Debug, Unicode e utilizzo delle impostazioni CRT e ATL. Tutte queste configurazioni possono essere duplicate in Visual C++ .NET utilizzando Configuration Manager, se lo si desidera.  
  
### <a name="version-60-configurations"></a>Configurazioni versione 6.0  
  
|Configurazione|Set di caratteri|Uso di ATL|  
|-------------------|-------------------|----------------|  
|Debug|MBCS|Statico|  
|Eseguire il debug Unicode|UNICODE|Statico|  
|Dipendenza Min|MBCS|Statico|  
|Dipendenza min|UNICODE|Statico|  
|Dimensioni Min|MBCS|DLL|  
|Dimensioni min|UNICODE|DLL|  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Utilizzo di proprietà del progetto](../../ide/working-with-project-properties.md)   
 [La finestra di dialogo Gestione configurazione](http://msdn.microsoft.com/en-us/fa182dca-282e-4ae5-bf37-e155344ca18b)   
 [Compiling and Building](/visualstudio/ide/compiling-and-building-in-visual-studio) (Compilazione e creazione)


