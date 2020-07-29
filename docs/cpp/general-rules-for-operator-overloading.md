---
title: Regole generali per overload di operatori
ms.date: 11/04/2016
helpviewer_keywords:
- operator overloading [C++], rules
ms.assetid: eb2b3754-35f7-4832-b1da-c502893dc0c7
ms.openlocfilehash: da0bf04435118c819fc29efd3082d8d312e43006
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213398"
---
# <a name="general-rules-for-operator-overloading"></a>Regole generali per overload di operatori

Le regole seguenti vincolano l'implementazione degli operatori di overload. Tuttavia, non si applicano agli operatori [New](../cpp/new-operator-cpp.md) e [Delete](../cpp/delete-operator-cpp.md) , che vengono trattati separatamente.

- Non è possibile definire nuovi operatori, ad esempio **.**

- Non è possibile ridefinire il significato degli operatori se applicato a tipi di dati incorporati.

- Operatori di overload devono essere una funzione membro della classe non statica o una funzione globale. Una funzione globale che necessita di accesso a membri della classe privata e protetta deve essere dichiarata come tipo Friend di quella classe. Una funzione globale deve accettare almeno un argomento di classe o di tipo enumerato o che sia un riferimento a una classe o a un tipo enumerato. Ad esempio:

    ```cpp
    // rules_for_operator_overloading.cpp
    class Point
    {
    public:
        Point operator<( Point & );  // Declare a member operator
                                     //  overload.
        // Declare addition operators.
        friend Point operator+( Point&, int );
        friend Point operator+( int, Point& );
    };

    int main()
    {
    }
    ```

   L'esempio di codice precedente dichiara l'operatore minore di come una funzione membro; tuttavia, gli operatori di addizione vengono dichiarati come funzioni globali con l'accesso Friend. Si noti che più di un'implementazione può essere fornita per un dato operatore. Nel caso dell'operatore di addizione precedente, le due implementazioni sono fornite per facilitare l'operazione commutativa. È altrettanto probabile che gli operatori che aggiungono un `Point` a un `Point` , **`int`** a un `Point` e così via, possano essere implementati.

- Gli operatori rispettano la precedenza, il raggruppamento e il numero di operandi stabiliti dall'utilizzo tipico con tipi incorporati. Pertanto, non esiste alcun modo per esprimere il concetto "aggiungere 2 e 3 a un oggetto di tipo `Point` ", aspettando che 2 venga aggiunto alla coordinata *x* e 3 da aggiungere alla coordinata *y* .

- Gli operatori unari dichiarati come funzioni membro non accettano argomenti; se dichiarati come funzioni globali, accettano un argomento.

- Gli operatori binari dichiarati come funzioni membro accettano un argomento; se dichiarati come funzioni globali, accettano due argomenti.

- Se un operatore può essere utilizzato come operatore unario o binario ( __&__ , __*__ , __+__ e __-__ ), è possibile eseguire l'overload di ogni utilizzo separatamente.

- Operatori di overload non possono avere argomenti predefiniti.

- Tutti gli operatori di overload tranne assegnazione (**operator =**) vengono ereditati dalle classi derivate.

- Il primo argomento per gli operatori di overload della funzione membro è sempre del tipo classe dell'oggetto per cui l'operatore viene richiamato (la classe in cui l'operatore viene dichiarato o una classe derivata da quella classe). Nessuna conversione viene fornita per il primo argomento.

Si noti che il significato di uno qualsiasi degli operatori può essere modificato completamente. Che include il significato degli operatori address-of ( **&** ), assegnazione ( **=** ) e chiamata di funzione. Inoltre, le identità che possono essere ritenute attendibili per tipi incorporati possono essere modificate utilizzando l'overload degli operatori. Ad esempio, le quattro istruzioni seguenti sono in genere equivalenti una volta completamente valutate:

```cpp
var = var + 1;
var += 1;
var++;
++var;
```

Questa identità non può essere ritenuta attendibile per tipi di classe che sottopongono a overload gli operatori. Inoltre, alcuni dei requisiti impliciti nell'utilizzo di questi operatori per i tipi di base sono flessibili per gli operatori di overload. Ad esempio, l'operatore di addizione/assegnazione, **+=** , richiede che l'operando di sinistra sia un l-value quando applicato ai tipi di base. non esiste alcun requisito quando l'operatore viene sottoposto a overload.

> [!NOTE]
> Per coerenza, è spesso consigliabile seguire il modello di tipi incorporati quando vengono definiti gli operatori di overload. Se la semantica di un operatore di overload differisce notevolmente dal relativo significato in altri contesti, può essere più ambiguo che utile.

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](../cpp/operator-overloading.md)
