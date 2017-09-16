---
title: '&lt;codecvt&gt; enums | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- codecvt/std::codecvt_mode
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
helpviewer_keywords:
- std::codecvt_mode
caps.latest.revision: 10
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: bba1b53abb7286c64bdaf79ec8cb2004ba67a9dd
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="ltcodecvtgt-enums"></a>&lt;codecvt&gt; enums
  
##  <a name="codecvt_mode"></a>  codecvt_mode Enumeration  
 Specifies configuration information for [locale](../standard-library/locale-class.md) facets.  
  
```  
enum codecvt_mode {  
    consume_header = 4,  
    generate_header = 2,  
    little_endian = 1  
 };  
```  
  
### <a name="remarks"></a>Remarks  
 The enumeration defines three constants that supply configuration information to the locale facets declared in [\<codecvt>](../standard-library/codecvt.md). The distinct values are:  
  
- `consume_header`, to consume an initial header sequence when reading a multibyte sequence and determine the endianness of the subsequent multibyte sequence to be read  
  
- `generate_header`, to generate an initial header sequence when writing a multibyte sequence to advertise the endianness of the subsequent multibyte sequence to be written  
  
- `little_endian`, to generate a multibyte sequence in little-endian order, as opposed to the default big-endian order  
  
 These constants can be ORed together in arbitrary combinations.  
  
## <a name="see-also"></a>See Also  
 [\<codecvt>](../standard-library/codecvt.md)


