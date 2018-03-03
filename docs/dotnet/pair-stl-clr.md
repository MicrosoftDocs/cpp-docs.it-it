---
title: Pair (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::pair
dev_langs:
- C++
helpviewer_keywords:
- pair class [STL/CLR]
ms.assetid: 3326b4d9-a52a-49e5-8103-9aa5e8b352de
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a8c4ae8ee9fbcfddd6009d4e91134d59a9a02cc9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pair-stlclr"></a>pair (STL/CLR)
La classe modello descrive un oggetto che esegue il wrapping di una coppia di valori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Value1,  
    typename Value2>  
    ref class pair;  
```  
  
#### <a name="parameters"></a>Parametri  
 Valore1  
 Il tipo del primo valore sottoposto a wrapping.  
  
 Value2  
 Il tipo del secondo valore sottoposto a wrapping.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[pair::first_type (STL/CLR)](../dotnet/pair-first-type-stl-clr.md)|Il tipo del primo valore sottoposto a wrapping.|  
|[pair::second_type (STL/CLR)](../dotnet/pair-second-type-stl-clr.md)|Il tipo del secondo valore sottoposto a wrapping.|  
  
|Oggetto membro|Descrizione|  
|-------------------|-----------------|  
|[pair::first (STL/CLR)](../dotnet/pair-first-stl-clr.md)|Il primo valore archiviato.|  
|[pair::second (STL/CLR)](../dotnet/pair-second-stl-clr.md)|Il secondo valore archiviato.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[pair::pair (STL/CLR)](../dotnet/pair-pair-stl-clr.md)|Costruisce un oggetto della coppia.|  
|[pair::swap (STL/CLR)](../dotnet/pair-swap-stl-clr.md)|Scambia il contenuto di due coppie.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[pair::operator= (STL/CLR)](../dotnet/pair-operator-assign-stl-clr.md)|Sostituisce la coppia di valori archiviata.|  
  
## <a name="remarks"></a>Note  
 L'oggetto archivia una coppia di valori. Utilizzare questa classe di modello per combinare due valori in un singolo oggetto. Si noti che `cliext::pair` (descritte di seguito) archivia solo i tipi gestiti, per archiviare una coppia di non gestito utilizzano tipi `std::pair`, dichiarati nel `<utility>`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/utilità >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [make_pair (STL/CLR)](../dotnet/make-pair-stl-clr.md)