---
title: 'Procedura: definire e utilizzare enumerazioni in C + + CLI | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- enum class, specifying underlying types
ms.assetid: df8f2b91-b9d2-4fab-9be4-b1d58b8bc570
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f5c30b679b24e574d359a1f838785f0196f290d1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33131517"
---
# <a name="how-to-define-and-consume-enums-in-ccli"></a>Procedura: Definire e usare enumerazioni in C++/CLI
Questo argomento descrive le enumerazioni in C + + CLI.  
  
## <a name="specifying-the-underlying-type-of-an-enum"></a>Specifica il tipo sottostante di enum  
 Per impostazione predefinita, il tipo sottostante di un'enumerazione è `int`.  Tuttavia, è possibile specificare il tipo è con o senza segno forme di `int`, `short`, `long`, `__int32`, o `__int64`.  È inoltre possibile utilizzare `char`.  
  
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
  
```Output  
sun  
0  
1  
2  
```  
  
## <a name="how-to-convert-between-managed-and-standard-enumerations"></a>Come eseguire la conversione tra enumerazioni gestite e standard  
 Nessuna conversione standard tra un tipo enum e un tipo integrale. è necessario un cast.  
  
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
  
```Output  
a and day2 are the same  
```  
  
## <a name="operators-and-enums"></a>Gli operatori e le enumerazioni  
 Gli operatori seguenti sono validi per le enumerazioni in C + + CLI:  
  
|Operatore|  
|--------------|  
|== != \< > \<= >=|  
|+ -|  
|&#124; ^ & ~|  
|++ --|  
|sizeof|  
  
 Gli operatori &#124; ^ & ~ + +-sono definiti solo per le enumerazioni con integrale sottostante tipi, senza includere bool.  Entrambi gli operandi devono essere del tipo di enumerazione.  
  
 Il compilatore non esegue alcun controllo statico o dinamico del risultato di un'operazione di enumerazione. un'operazione può comportare un valore non compreso nell'intervallo di enumeratori valido dell'enumerazione.  
  
> [!NOTE]
>  C++ 11 introduce i tipi di classe di enumerazione nel codice non gestito che sono significativamente diversi rispetto alle classi di enumerazione gestita in C + + CLI. In particolare, il tipo di classe C + + 11 enum non supporta gli stessi operatori di tipo di classe di enumerazione gestita in C + + CLI e C + + codice sorgente CLI necessario fornire un identificatore di accessibilità nell'enumerazione gestita dichiarazioni di classe per distinguerli da non gestito (C++ 11) dichiarazioni di classe enum. Per ulteriori informazioni sulle classi di enumerazione in C + + CLI, C + + CX e C++ 11, vedere [classe enum](../windows/enum-class-cpp-component-extensions.md).  
  
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
  
```Output  
4  
1  
True  
```  
  
## <a name="see-also"></a>Vedere anche  
 [classe di enumerazione](../windows/enum-class-cpp-component-extensions.md)