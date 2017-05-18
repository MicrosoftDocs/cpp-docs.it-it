---
title: Tipo di accesso alla libreria | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- type libraries, accessing
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
caps.latest.revision: 14
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 8a3fbcf66036ef3df3bd34b5182dac8af3dfccef
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="type-library-access"></a>Accesso alla libreria dei tipi
Librerie dei tipi espongono le interfacce del controllo OLE ad altre applicazioni compatibili con OLE. Ogni controllo OLE deve avere una libreria dei tipi se una o più interfacce da esporre.  
  
 Le seguenti macro consentono un controllo OLE fornire l'accesso alla propria libreria dei tipi:  
  
### <a name="type-library-access"></a>Accesso alla libreria dei tipi  
  
|||  
|-|-|  
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Dichiara un `GetTypeLib` funzione membro di un controllo OLE (deve essere utilizzato nella dichiarazione di classe).|  
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implementa un `GetTypeLib` funzione membro di un controllo OLE (deve essere utilizzata nell'implementazione della classe).|  
  
##  <a name="declare_oletypelib"></a>DECLARE_OLETYPELIB  
 Dichiara il `GetTypeLib` funzione membro di classe del controllo.  
  
```   
DECLARE_OLETYPELIB(class_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo correlata alla libreria dei tipi.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa macro nel file di intestazione della classe di controllo.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  

##  <a name="implement_oletypelib"></a>IMPLEMENT_OLETYPELIB  
 Implementa il controllo `GetTypeLib` funzione membro.  
  
```   
IMPLEMENT_OLETYPELIB(class_name, tlid, wVerMajor,  wVerMinor)   
```  
  
### <a name="parameters"></a>Parametri  
 *CLASS_NAME*  
 Il nome della classe del controllo correlata alla libreria dei tipi.  
  
 *tlid*  
 Il numero ID della libreria dei tipi.  
  
 `wVerMajor`  
 Il numero di versione principale della libreria di tipo.  
  
 `wVerMinor`  
 Il numero di versione secondaria della libreria tipo.  
  
### <a name="remarks"></a>Note  
 Questa macro deve essere presente nel file di implementazione per qualsiasi classe di controllo che utilizza il `DECLARE_OLETYPELIB` (macro).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
   
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

