---
title: "Regole generali per overload di operatori | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overload di operatori, regole"
ms.assetid: eb2b3754-35f7-4832-b1da-c502893dc0c7
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Regole generali per overload di operatori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le regole seguenti vincolano l'implementazione degli operatori di overload.  Tuttavia, non si applicano agli operatori [new](../cpp/new-operator-cpp.md) e [delete](../cpp/delete-operator-cpp.md), analizzati separatamente.  
  
-   Non è possibile definire nuovi operatori, come \*\*.  
  
-   Non è possibile ridefinire il significato degli operatori se applicato a tipi di dati incorporati.  
  
-   Operatori di overload devono essere una funzione membro della classe non statica o una funzione globale.  Una funzione globale che necessita di accesso a membri della classe privata e protetta deve essere dichiarata come tipo Friend di quella classe.  Una funzione globale deve accettare almeno un argomento di classe o di tipo enumerato o che sia un riferimento a una classe o a un tipo enumerato.  Ad esempio:  
  
    ```  
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
  
     L'esempio di codice precedente dichiara l'operatore minore di come una funzione membro; tuttavia, gli operatori di addizione vengono dichiarati come funzioni globali con l'accesso Friend.  Si noti che più di un'implementazione può essere fornita per un dato operatore.  Nel caso dell'operatore di addizione precedente, le due implementazioni sono fornite per facilitare l'operazione commutativa.  È ugualmente probabile che gli operatori che aggiungono un `Point` a un `Point`, `int` a un `Point` e così via, possano essere implementati.  
  
-   Gli operatori rispettano la precedenza, il raggruppamento e il numero di operandi stabiliti dall'utilizzo tipico con tipi incorporati.  Di conseguenza, non è possibile esprimere il concetto "aggiungi 2 e 3 a un oggetto di tipo `Point`", prevedendo che 2 venga aggiunto alla coordinata *x* e 3 alla coordinata *y*.  
  
-   Gli operatori unari dichiarati come funzioni membro non accettano argomenti; se dichiarati come funzioni globali, accettano un argomento.  
  
-   Gli operatori binari dichiarati come funzioni membro accettano un argomento; se dichiarati come funzioni globali, accettano due argomenti.  
  
-   Se un operatore può essere utilizzato come operatore unario o binario \(**&**, **\***, **\+** e **\-**\), è possibile sottoporre a overload ciascun utilizzo separatamente.  
  
-   Operatori di overload non possono avere argomenti predefiniti.  
  
-   Tutti gli operatori di overload ad eccezione degli operatori di assegnazione \(`operator=`\) vengono ereditati dalle classi derivate.  
  
-   Il primo argomento per gli operatori di overload della funzione membro è sempre del tipo classe dell'oggetto per cui l'operatore viene richiamato \(la classe in cui l'operatore viene dichiarato o una classe derivata da quella classe\).  Nessuna conversione viene fornita per il primo argomento.  
  
 Si noti che il significato di uno qualsiasi degli operatori può essere modificato completamente.  Ciò include il significato di operatori address\-of \(**&**\), operatori di assegnazione \(**\=**\) e operatori di chiamata di funzione.  Inoltre, le identità che possono essere ritenute attendibili per tipi incorporati possono essere modificate utilizzando l'overload degli operatori.  Ad esempio, le quattro istruzioni seguenti sono in genere equivalenti una volta completamente valutate:  
  
```  
var = var + 1;  
var += 1;  
var++;  
++var;  
```  
  
 Questa identità non può essere ritenuta attendibile per tipi di classe che sottopongono a overload gli operatori.  Inoltre, alcuni dei requisiti impliciti nell'utilizzo di questi operatori per i tipi di base sono flessibili per gli operatori di overload.  Ad esempio, l'operatore di assegnazione\/di addizione, `+=`, richiede che l'operando di sinistra sia un l\-value quando applicato a tipi di base; non vi è tale requisito quando l'operatore viene sottoposto a overload.  
  
> [!NOTE]
>  Per coerenza, è spesso consigliabile seguire il modello di tipi incorporati quando vengono definiti gli operatori di overload.  Se la semantica di un operatore di overload differisce notevolmente dal relativo significato in altri contesti, può essere più ambiguo che utile.  
  
## Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)