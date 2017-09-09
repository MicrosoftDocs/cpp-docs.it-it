---
title: messages_byname Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- xlocmes/std::messages_byname
dev_langs:
- C++
helpviewer_keywords:
- messages_byname class
ms.assetid: c6c64841-3e80-43c8-b54c-fed41833ad6b
caps.latest.revision: 22
author: corob-msft
ms.author: corob
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
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 5bc3f2ed4f97c1beaead7510a0c5c09f5bd91e9b
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="messagesbyname-class"></a>messages_byname Class
The derived template class describes an object that can serve as a message facet of a given locale, enabling the retrieval of localized messages.  
  
## <a name="syntax"></a>Syntax  
  
```
template <class CharType>
class messages_byname : public messages<CharType> {
public:
    explicit messages_byname(
    const char *_Locname,
    size_t _Refs = 0);

    explicit messages_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~messages_byname();

};
```  
  
#### <a name="parameters"></a>Parameters  
 `_Locname`  
 A named locale.  
  
 `_Refs`  
 An initial reference count.  
  
## <a name="remarks"></a>Remarks  
 Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [messages](../standard-library/messages-class.md#messages)\<CharType>( `_Refs`).  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)




