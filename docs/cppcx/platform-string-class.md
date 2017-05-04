---
title: "Classe Platform::String | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String"
ms.assetid: 72dd04a4-a694-40d3-b899-eaa0b503eab8
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe Platform::String
Rappresenta una raccolta sequenziale di caratteri Unicode, tipicamente utilizzata per rappresentare del testo. Per ulteriori informazioni ed esempi, vedere [Stringhe](../cppcx/strings-c-cx.md).  
  
## Sintassi  
  
```cpp  
  
public ref class String sealed : Object,  
    IDisposable,  
    IEquatable,  
    IPrintable  
```  
  
## Iteratori  
 Per enumerare i caratteri in un oggetto String, è possibile utilizzare due funzioni di iteratore, che non sono membri della classe String, con la funzione del modello `std::for_each`.  
  
|Membro|Descrizione|  
|------------|-----------------|  
|`const char16* begin(String^ s)`|Restituisce un puntatore che punta all'inizio dell'oggetto String specificato.|  
|`const char16* end(String^ s)`|Restituisce un puntatore successivo alla fine dell'oggetto String specificato.|  
  
## Membri  
 La classe String eredita da Object e dalle interfacce IDisposable, IEquatable e IPrintable.  
  
 La classe String include inoltre i seguenti tipi di membri.  
  
 **Costruttori**  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Costruttore String::String](../cppcx/string-string-constructor.md)|Inizializza una nuova istanza della classe String.|  
  
 **Metodi**  
  
 La classe String eredita i metodi Equals\(\), Finalize\(\), GetHashCode\(\), GetType\(\), MemberwiseClose\(\) e ToString\(\) da [Classe Platform::Object](../cppcx/platform-object-class.md). La classe String utilizza anche i metodi seguenti.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[Metodo String::Begin](../cppcx/string-begin-method.md)|Restituisce un puntatore che punta all'inizio della stringa corrente.|  
|[Metodo String::CompareOrdinal](../cppcx/string-compareordinal-method.md)|Confronta due oggetti `String` valutando i valori numerici dei caratteri corrispondenti nei due valori stringa rappresentati dagli oggetti.|  
|[Metodo String::Concat](../cppcx/string-concat-method.md)|Concatena i valori di due oggetti String specificati.|  
|[Metodo String::Data](../cppcx/string-data-method.md)|Restituisce un puntatore che punta all'inizio della stringa corrente.|  
|[Metodo String::Dispose](../cppcx/string-dispose-method.md)|Libera o rilascia delle risorse.|  
|[Metodo String::End](../cppcx/string-end-method.md)|Restituisce un puntatore successivo alla fine della stringa corrente.|  
|[Metodo String::Equals](../cppcx/string-equals-method.md)|Indica se l'oggetto specificato è uguale all'oggetto corrente.|  
|[Metodo String::GetHashCode](../cppcx/string-gethashcode-method.md)|Restituisce il codice hash per l'istanza.|  
|[Metodo String::IsEmpty](../cppcx/string-isempty-method.md)|Indica se l'oggetto String corrente è vuoto.|  
|[Metodo String::IsFastPass](../cppcx/string-isfastpass-method.md)|Indica se l'oggetto String corrente è coinvolto in un'operazione di *passaggio rapido*. In questo tipo di operazione il conteggio dei riferimenti viene sospeso.|  
|[Metodo String::Length](../cppcx/string-length-method.md)|Recupera la lunghezza dell'oggetto String corrente.|  
|[Metodo String::ToString](../cppcx/string-tostring-method-c-cx.md)|Restituisce un oggetto String il cui valore è uguale a quello dell'oggetto String corrente.|  
  
 **Proprietà**  
  
 La classe String presenta le proprietà seguenti.  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Operatore String::operator\=\=](../cppcx/string-operator-equality-operator-c-cx.md)|Indica se due oggetti String specificati hanno lo stesso valore.|  
|[operatore\+ Operatore](../cppcx/string-operator-decrementoperator.md)|Concatena due oggetti stringa in un nuovo oggetto stringa.|  
|[Operatore String::operator\>](../cppcx/string-operator-greater-than-operator-c-cx.md)|Indica se il valore di un oggetto String è maggiore del valore di un secondo oggetto String.|  
|[Operatore String::operator\>\=](../cppcx/string-operator-greater-than-or-equals-c-cx.md)|Indica se il valore di un oggetto String è maggiore o uguale al valore di un secondo oggetto String.|  
|[Operatore String::operator\!\=](../cppcx/string-operator-inequality-operator-c-cx.md)|Indica se i valori di due oggetti String specificati sono differenti.|  
|[Operatore String::operator\<](../cppcx/string-operator-less-than-operator-c-cx.md)|Indica se il valore di un oggetto String è minore del valore di un secondo oggetto String.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione** vccorlib.h \(inclusa per impostazione predefinita\)  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)