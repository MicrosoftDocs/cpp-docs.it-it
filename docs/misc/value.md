---
title: "__value | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__value_cpp"
  - "__value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__value (parola chiave)"
  - "tipi di valore, dichiarazione"
  - "parola chiave value, sintassi"
ms.assetid: b14b64f7-5db6-4e92-a144-fcbf67572b49
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __value
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Dichiara una classe come un tipo \_\_value.  
  
## Sintassi  
  
```  
  
__value  
 class-specifier  
__value  
 struct-specifier  
__nogc  
array-specifier  
__nogc  
pointer-specifier  
  
```  
  
## Note  
 Un tipo `__value` differisce dai tipi `__gc` in quanto le variabili di tipo `__value` contengono direttamente i dati, mentre le variabili gestite puntano ai dati, archiviati nell'heap di Common Language Runtime.  
  
 Le seguenti condizioni si applicano ai tipi `__value`:  
  
-   La parola chiave `__value` non può essere applicata a un'interfaccia.  
  
-   Un tipo `__value` può ereditare da un numero qualsiasi di interfacce e non da altri tipi o dai tipi `__value`.  
  
-   Un tipo `__value` è sealed per definizione. Per ulteriori informazioni, vedere [\_\_sealed](../misc/sealed.md).  
  
-   È valido utilizzare un tipo `__value` ogni volta che un tipo gestito è consentito.  
  
> [!NOTE]
>  La parola chiave `__value` non è consentita se utilizzata con la parola chiave `__abstract`.  
  
 Un tipo `__value` può essere connesso in modo esplicito a un puntatore **System::Object**. Questo concetto è noto come boxing.  
  
 Le linee guida seguenti si applicano per incorporare un tipo di valore in un tipo `__nogc`:  
  
-   Il tipo di valore deve disporre di **LayoutSequential** o **LayoutExplicit**.  
  
-   Il tipo di valore non può avere membri puntatore \_gc.  
  
-   Il tipo di valore non può disporre di membri dati privati.  
  
 Nelle estensioni gestite di C\+\+ gli equivalenti di una classe e di uno struct C\# sono i seguenti:  
  
|Estensioni gestite per C\+\+|C\#|Per altre informazioni|  
|----------------------------------|---------|----------------------------|  
|\_\_gc struct<br /><br /> \-oppure\-<br /><br /> \_\_gc class|classe|Parola chiave [class](../Topic/class%20\(C%23%20Reference\).md)|  
|\_\_value struct<br /><br /> \-oppure\-<br /><br /> \_\_value class|struct|parola chiave [struct](../Topic/struct%20\(C%23%20Reference\).md)|  
  
## Esempio  
 Nell'esempio seguente un tipo `__value` \(`V`\) viene dichiarato e quindi vengono manipolate due istanze del tipo `__value`:  
  
```  
// keyword__value.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value struct V {   
   int m_i;  
};  
  
int main() {  
   V v1, v2;  
   v1.m_i = 5;  
   v2 = v1;   // copies all fields of v1 to v2  
   v2.m_i = 6;   // does not affect v1.m_I  
}  
```