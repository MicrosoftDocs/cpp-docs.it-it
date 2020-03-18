---
title: exception Class
ms.date: 11/04/2016
f1_keywords:
- exception/std::exception
helpviewer_keywords:
- exception class
ms.assetid: 4f181f67-5888-4b50-89a6-745091ffb2fe
ms.openlocfilehash: 5bef8190889ae00298760ea395fb524f557c2be2
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446824"
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

## <a name="remarks"></a>Osservazioni

In particolare, questa classe base è la radice delle classi di eccezioni standard definite in [\<stdexcept>](../standard-library/stdexcept.md). Il valore C della stringa restituito da `what` non viene specificato dal costruttore predefinito, ma può essere definito dai costruttori per alcune classi derivate come stringa C definita dall'implementazione. Nessuna delle funzioni membro genera eccezioni.

Il parametro **int** consente di specificare che non deve essere allocata alcuna memoria. Il valore di **int** viene ignorato.

> [!NOTE]
> I costruttori `exception(const char* const &message)` e `exception(const char* const &message, int)` sono estensioni Microsoft della libreria standard C++.

## <a name="example"></a>Esempio

Per esempi relativi all'uso delle classi exception standard che ereditano dalla classe `exception`, vedere le classi definite in [\<stdexcept>](../standard-library/stdexcept.md).
