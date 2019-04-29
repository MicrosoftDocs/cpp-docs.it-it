---
title: exception Class
ms.date: 11/04/2016
f1_keywords:
- exception
helpviewer_keywords:
- exception class
ms.assetid: 4f181f67-5888-4b50-89a6-745091ffb2fe
ms.openlocfilehash: 009ef74d810976eb9f054b45e388ceb0fe612b2e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400617"
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

Il **int** parametro consente di specificare che non deve essere allocata alcuna memoria. Il valore della **int** viene ignorato.

> [!NOTE]
> I costruttori `exception(const char* const &message)` e `exception(const char* const &message, int)` sono estensioni Microsoft della libreria standard C++.

## <a name="example"></a>Esempio

Per esempi relativi all'uso delle classi exception standard che ereditano dalla classe `exception`, vedere le classi definite in [\<stdexcept>](../standard-library/stdexcept.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<exception>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
