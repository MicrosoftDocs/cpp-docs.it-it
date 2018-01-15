---
title: Classe is_trivially_copy_constructible | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_trivially_copy_constructible
dev_langs: C++
helpviewer_keywords: is_trivially_copy_constructible
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
caps.latest.revision: "24"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4e8029abe737aad771edf588e31b4a91d22fa092
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="istriviallycopyconstructible-class"></a>Classe is_trivially_copy_constructible
Verifica se il tipo ha un costruttore di copia semplice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_trivially_copy_constructible;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `T` è una classe che ha un costruttore di copia semplice; in caso contrario, contiene false.  
  
 Un costruttore di copia per una classe `T` è semplice se è dichiarato in modo implicito, la classe `T` non ha funzioni o basi virtuali, tutte le basi dirette della classe `T` hanno costruttori di copia semplice, le classi di tutti i membri di dati non statici di tipo classe hanno costruttori di copia semplice e le classi di tutti i membri di dati non statici di tipo matrice di classe hanno costruttori di copia semplice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)



