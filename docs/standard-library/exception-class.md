---
title: Classe exception | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- exception
dev_langs:
- C++
helpviewer_keywords:
- exception class
ms.assetid: 4f181f67-5888-4b50-89a6-745091ffb2fe
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 713600a72886b713c58c4a449c6f5270a3ccfe9a
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="exception-class"></a>exception Class

La classe funge da classe base per tutte le eccezioni generate da determinate espressioni e dalla libreria C++ standard.

## <a name="syntax"></a>Sintassi

```cpp
class exception {
   public:
   exception();
   exception(const char* const &message);
   exception(const char* const &message, int);
   exception(const exception &right);
   exception& operator=(const exception &right);
   virtual ~exception();
   virtual const char *what() const;
   };
```

## <a name="remarks"></a>Note

In particolare, questa classe base è la radice delle classi di eccezioni standard definite in [\<stdexcept>](../standard-library/stdexcept.md). Il valore C della stringa restituito da `what` non viene specificato dal costruttore predefinito, ma può essere definito dai costruttori per alcune classi derivate come stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

Il parametro `int` consente di specificare che non deve essere allocata alcuna memoria. Il valore di `int` viene ignorato.

> [!NOTE]
> I costruttori `exception(const char* const &message)` e `exception(const char* const &message, int)` sono estensioni Microsoft della libreria standard C++.

## <a name="example"></a>Esempio

Per esempi relativi all'uso delle classi exception standard che ereditano dalla classe `exception`, vedere le classi definite in [\<stdexcept>](../standard-library/stdexcept.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
