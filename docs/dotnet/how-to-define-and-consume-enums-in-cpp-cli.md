---
title: "Procedura: Definire e usare enumerazioni in C++/CLI | Microsoft Docs"
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
  - "enum (classe), specifica di tipi sottostanti"
ms.assetid: df8f2b91-b9d2-4fab-9be4-b1d58b8bc570
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Definire e usare enumerazioni in C++/CLI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritte le enumerazioni in C\+\+\/CLI.  
  
## Specificare il tipo sottostante di un'enumerazione  
 Per impostazione predefinita, il tipo sottostante di un'enumerazione è `int`.  Tuttavia, è possibile specificare il tipo da firmare o form senza segno a `int`, di `short`, di `long`, di `__int32`, o di `__int64`.  È inoltre possibile utilizzare `char`.  
  
```  
// mcppv2_enum_3.cpp  
// compile with: /clr  
public enum class day_char : char {sun, mon, tue, wed, thu, fri, sat};  
  
int main() {  
   // fully qualified names, enumerator not injected into scope  
   day_char d = day_char::sun, e = day_char::mon;  
   System::Console::WriteLine(d);  
   char f = (char)d;  
   System::Console::WriteLine(f);  
   f = (char)e;  
   System::Console::WriteLine(f);  
   e = day_char::tue;  
   f = (char)e;  
   System::Console::WriteLine(f);  
}  
```  
  
 **Output**  
  
  **uniche**  
**0**  
**1**  
**2**   
## La conversione tra enumerazioni gestite e standard  
 Nessuna conversione standard tra un enum e un tipo integrale; un cast è obbligatorio.  
  
```  
// mcppv2_enum_4.cpp  
// compile with: /clr  
enum class day {sun, mon, tue, wed, thu, fri, sat};  
enum {sun, mon, tue, wed, thu, fri, sat} day2; // unnamed std enum  
  
int main() {  
   day a = day::sun;  
   day2 = sun;  
   if ((int)a == day2)  
   // or...  
   // if (a == (day)day2)  
      System::Console::WriteLine("a and day2 are the same");  
   else  
      System::Console::WriteLine("a and day2 are not the same");  
}  
```  
  
 **Output**  
  
  **a e day2 coincideranno**   
## Operatori ed enumerazioni  
 I seguenti operatori sono validi sulle enumerazioni in C\+\+\/CLI:  
  
|Operatore|  
|---------------|  
|\=\= \!\= \< \> \<\= \>\=|  
|\+ \-|  
|&#124; ^ & ~|  
|\+\+ \-\-|  
|sizeof|  
  
 Operatori &#124; ^ & ~ \+\+ \-\- vengono definiti solo per le enumerazioni ai tipi sottostanti integrali, escluso il bool.  Entrambi gli operandi devono avere lo stesso tipo di enumerazione.  
  
 Il compilatore esegue controllare non statico o dinamico del risultato di un'operazione enum; un'operazione può comportare un valore non compresi gli enumeratori validi di enumerazione.  
  
> [!NOTE]
>  C\+\+11 introduce enum class nel codice non gestito che sono molto diverse delle classi gestite enum in C\+\+\/CLI.  In particolare, il tipo enum class C\+\+11 non supporta gli stessi operatori come classe gestita enum type in C\+\+\/CLI e il codice sorgente C\+\+\/CLI forniscano un identificatore di accessibilità nelle dichiarazioni di classi gestite enum per distinguerle dalle dichiarazioni di classe non gestite enum \(C\+\+11\).  Per ulteriori informazioni sulle classi in C\+\+\/CLI, C\+\+\/CX e C\+\+11, vedere [enum class](../windows/enum-class-cpp-component-extensions.md).  
  
```  
// mcppv2_enum_5.cpp  
// compile with: /clr  
private enum class E { a, b } e, mask;  
int main() {  
   if ( e & mask )   // C2451 no E->bool conversion  
      ;  
  
   if ( ( e & mask ) != 0 )   // C3063 no operator!= (E, int)  
      ;  
  
   if ( ( e & mask ) != E() )   // OK  
      ;  
}  
```  
  
```  
// mcppv2_enum_6.cpp  
// compile with: /clr  
private enum class day : int {sun, mon};  
enum : bool {sun = true, mon = false} day2;  
  
int main() {  
   day a = day::sun, b = day::mon;  
   day2 = sun;  
  
   System::Console::WriteLine(sizeof(a));  
   System::Console::WriteLine(sizeof(day2));  
   a++;  
   System::Console::WriteLine(a == b);  
}  
```  
  
 **Output**  
  
  **4**  
**1**  
**True**   
## Vedere anche  
 [enum class](../windows/enum-class-cpp-component-extensions.md)