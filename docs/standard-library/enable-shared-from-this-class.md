---
title: Classe enable_shared_from_this | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- memory/std::enable_shared_from_this
dev_langs:
- C++
helpviewer_keywords:
- enable_shared_from_this class
- enable_shared_from_this
ms.assetid: 9237603d-22e2-421f-b070-838ac006baf5
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6dbe32a248475cad26dae75abfc37f4d2b301651
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="enablesharedfromthis-class"></a>Classe enable_shared_from_this

Consente di generare un `shared_ptr`.

## <a name="syntax"></a>Sintassi

```cpp
class enable_shared_from_this {
public:
    shared_ptr<Ty>
        shared_from_this();
    shared_ptr<const Ty> shared_from_this() const;
protected:
    enable_shared_from_this();
    enable_shared_from_this(const enable_shared_from_this&);
    enable_shared_from_this& operator=(const enable_shared_from_this&);
    ~enable_shared_from_this();
};
```

### <a name="parameters"></a>Parametri

`Ty` Tipo controllato dal puntatore condiviso.

## <a name="remarks"></a>Note

Gli oggetti derivati da `enable_shared_from_this` possono usare i metodi `shared_from_this` nelle funzioni membro per creare proprietari [shared_ptr](../standard-library/shared-ptr-class.md) dell'istanza che condividono la proprietà con proprietari `shared_ptr` esistenti. In caso contrario, se si crea un nuovo `shared_ptr` usando `this`, è diverso dai proprietari `shared_ptr` esistenti, il che può portare a riferimenti non validi o all'eliminazione di un oggetto più volte.

I costruttori, il distruttore e l'operatore di assegnazione sono protetti per evitare un uso improprio accidentale. Il tipo di argomento del modello `Ty` deve essere il tipo della classe derivata.

Per un esempio di utilizzo, vedere [enable_shared_from_this::shared_from_this](#shared_from_this).

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="shared_from_this"></a>  enable_shared_from_this::shared_from_this

Genera un `shared_ptr` che condivide la proprietà dell'istanza con i proprietari `shared_ptr` esistenti.

```cpp
shared_ptr<T> shared_from_this();
shared_ptr<const T> shared_from_this() const;
```

### <a name="remarks"></a>Note

Quando si derivano oggetti dalla classe di base `enable_shared_from_this`, le funzioni membro del modello `shared_from_this` restituiscono un oggetto [classe shared_ptr](../standard-library/shared-ptr-class.md) che condivide la proprietà di questa istanza con i proprietari `shared_ptr` esistenti. In caso contrario, se si crea un nuovo `shared_ptr` da `this`, è diverso dai proprietari `shared_ptr` esistenti, il che può portare a riferimenti non validi o all'eliminazione di un oggetto più volte. Il comportamento sarà indefinito se si chiama `shared_from_this` in un'istanza che non è già di proprietà di un oggetto `shared_ptr`.

### <a name="example"></a>Esempio

```cpp
// std_memory_shared_from_this.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

struct base : public std::enable_shared_from_this<base>
{
    int val;
    shared_ptr<base> share_more()
    {
        return shared_from_this();
    }
};

int main()
{
    auto sp1 = make_shared<base>();
    auto sp2 = sp1->share_more();

    sp1->val = 3;
    cout << "sp2->val == " << sp2->val << endl;
    return 0;
}
```

```Output
sp2->val == 3
```

## <a name="see-also"></a>Vedere anche

[enable_shared_from_this::shared_from_this](#shared_from_this)<br/>
[Classe shared_ptr](../standard-library/shared-ptr-class.md)<br/>