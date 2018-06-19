---
title: classe enum (estensioni del componente C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 8010fa8c-bad6-45b4-8214-b4db64d7ffe1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e17c5e2055ef478dc7cafd5a7b2677f47bb9e074
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880605"
---
# <a name="enum-class--c-component-extensions"></a>classe di enumerazione (Estensioni del componente C++)
Dichiara un'enumerazione nell'ambito dello spazio dei nomi che è un tipo definito dall'utente costituito da un set di costanti denominate definite enumeratori.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 **Note**  
  
 C++/CX e C++/CLI supportano `public enum class` e `private enum class` che sono simili all'oggetto `enum class` C++ standard, ma con l'aggiunta dell'identificatore di accessibilità. In **/clr**, il tipo `enum class` C++11 è consentito, ma verrà generato l'avviso C4472 per verificare se si desidera effettivamente il tipo enum ISO e non il tipo C++/CX e C++/CLI. Per ulteriori informazioni su C++ Standard ISO `enum` (parola chiave), vedere [enumerazioni](../cpp/enumerations-cpp.md).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 **Sintassi**  
  
```  
  
      access  
      enum class  
      enumeration-identifier  
      [:underlying-type] { enumerator-list } [var];  
accessenum structenumeration-identifier[:underlying-type] { enumerator-list } [var];  
```  
  
 **Parametri**  
  
 *access*  
 Accessibilità dell'enumerazione, che può essere `public` o `private`.  
  
 *enumeration-identifier*  
 Nome dell'enumerazione.  
  
 *underlying-type*  
 (Facoltativo) Tipo sottostante dell'enumerazione.  
  
 (Facoltativo. Solo per Windows Runtime) il tipo sottostante dell'enumerazione, che può essere `bool`, `char`, `char16`, `int16`, `uint16`, `int`, `uint32`, `int64`, o `uint64`.  
  
 *enumerator-list*  
 Elenco delimitato da virgole di nomi dell'enumeratore.  
  
 Il valore di ogni enumeratore è un'espressione costante che viene definita in modo implicito dal compilatore o in modo esplicito dalla notazione *enumerator*`=`*constant-expression*. Per impostazione predefinita, il valore del primo enumeratore è zero se è definito in modo implicito. Il valore di ogni enumeratore successivo definito in modo implicito è il valore dell'enumeratore precedente + 1.  
  
 *var*  
 (Facoltativo) Nome di una variabile del tipo di enumerazione.  
  
 **Note**  
  
 Per altre informazioni ed esempi, vedere [Enumerazioni](http://msdn.microsoft.com/%20library/windows/apps/hh755820.aspx).  
  
 Il compilatore genera messaggi di errore se l'espressione costante che definisce il valore di un enumeratore non può essere rappresentata da *underlying-type*.  Tuttavia, il compilatore non segnala un errore per un valore non appropriato per il tipo sottostante. Ad esempio:  
  
-   Se *underlying-type* è numerico e un enumeratore specifica il valore massimo per questo tipo, non è possibile rappresentare il valore della enumerazione successiva definita in modo implicito.  
  
-   Se *underlying-type* è `bool`e vengono definiti in modo implicito più di due enumeratori, non è possibile rappresentare gli enumeratori successivi ai primi due.  
  
-   Se *underlying-type* è `char16`e il valore di enumerazione varia da 0xD800 a 0xDFFF, il valore può essere rappresentato. Tuttavia, il valore non è logicamente corretto perché rappresenta metà di una coppia di surrogati Unicode che non devono essere visualizzati singolarmente.  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Sintassi**  
  
```  
  
      access  
      enum class  
      name [:type] { enumerator-list } var;  
accessenum structname [:type] { enumerator-list } var;  
```  
  
 **Parametri**  
  
 `access`  
 Accessibilità dell'enumerazione.  Può essere **public** o `private`.  
  
 `enumerator-list`  
 Elenco delimitato da virgole di identificatori (enumeratori) nell'enumerazione.  
  
 `name`  
 Nome dell'enumerazione.  Le enumerazioni gestite anonime non sono consentite.  
  
 `type` (facoltativo)  
 Tipo sottostante degli *identificatori*.  Può trattarsi di qualsiasi tipo scalare, ad esempio versioni con o senza segno di int, short o long.  È consentito anche`bool` o `char` .  
  
 `var` (facoltativo)  
 Nome di una variabile del tipo di enumerazione.  
  
 **Note**  
  
 **enum class** ed **enum struct** sono dichiarazioni equivalenti.  
  
 Sono disponibili due tipi di enumerazioni: gestite o C++/CX e standard.  
  
 Un'enumerazione gestita o C++/CX potrebbe essere definita come riportato di seguito:  
  
```cpp  
public enum class day {sun, mon };  
```  
  
 ed è semanticamente equivalente a:  
  
```cpp  
ref class day {  
public:  
   static const int sun = 0;  
   static const int mon = 1;  
};  
```  
  
 Un'enumerazione standard può essere definita come riportato di seguito:  
  
```cpp  
enum day2 { sun, mon };  
```  
  
 ed è semanticamente equivalente a:  
  
```cpp  
static const int sun = 0;  
static const int mon = 1;  
```  
  
 I nomi degli enumeratori gestiti (*identificatori*) non vengono inseriti nell'ambito in cui è definita l'enumerazione. Tutti i riferimenti agli enumeratori devono essere completi (*nome*`::`*identificatore*).  Per questo motivo, è possibile definire un'enumerazione gestita anonima.  
  
 Gli enumeratori di un'enumerazione standard vengono inseriti in modo forte nell'ambito di inclusione.  Ovvero, se è presente un altro simbolo con lo stesso nome di un enumeratore nell'ambito di inclusione, il compilatore genererà un errore.  
  
 In Visual C++ 2002 e Visual C++ 2003 gli enumeratori venivano inseriti in modo debole (visibile nell'ambito di inclusione a meno che non ci fosse un altro identificatore con lo stesso nome).  
  
 Se viene definita un'enumerazione C++ standard (senza **class** o `struct`), la compilazione con **/clr** comporta la compilazione dell'enumerazione come enumerazione gestita.  L'enumerazione presenta comunque la semantica di un'enumerazione non gestita.  Si noti che tramite il compilatore viene inserito un attributo `Microsoft::VisualC::NativeEnumAttribute`riconosciuto dal compilatore di Visual C++ per identificare l'intento del programmatore affinché l'enumerazione sia nativa.  Gli altri compilatori visualizzeranno l'enumerazione standard solo come enumerazione gestita.  
  
 Un'enumerazione standard denominata e compilata con /clr sarà visibile nell'assembly come enumerazione gestita e potrà essere usata da qualsiasi altro compilatore gestito.   Tuttavia, un'enumerazione standard senza nome non sarà visibile pubblicamente nell'assembly.  
  
 In Visual C++ 2002 e Visual C++ 2003 un'enumerazione standard usata come tipo nel parametro di funzione:  
  
```cpp  
// mcppv2_enum.cpp  
// compile with: /clr  
enum E { a, b };  
void f(E) {System::Console::WriteLine("hi");}  
  
int main() {  
   E myi = b;  
   f(myi);  
}  
```  
  
 genererebbe le operazioni seguenti in MSIL per la firma della funzione:  
  
```  
void f(int32);  
```  
  
 Nelle versioni correnti del compilatore, tuttavia, l'enumerazione standard viene generata come enumerazione gestita con [NativeEnumAttribute] e le operazioni seguenti in MSIL per la firma della funzione:  
  
```  
void f(E)  
```  
  
 Per ulteriori informazioni sulle enumerazioni native, vedere [Dichiarazioni di enumerazioni C++](../cpp/enumerations-cpp.md).  
  
 Per altre informazioni sulle enumerazioni CLR, vedere:  
  
-   [Tipo sottostante di un'enumerazione](../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md)  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 disc  
  
```cpp  
// mcppv2_enum_2.cpp  
// compile with: /clr  
// managed enum  
public enum class m { a, b };  
  
// standard enum  
public enum n { c, d };  
  
// unnamed, standard enum  
public enum { e, f } o;  
  
int main()   
{  
   // consume managed enum  
   m mym = m::b;  
   System::Console::WriteLine("no automatic conversion to int: {0}", mym);  
   System::Console::WriteLine("convert to int: {0}", (int)mym);  
  
   // consume standard enum  
   n myn = d;  
   System::Console::WriteLine(myn);  
  
   // consume standard, unnamed enum  
   o = f;  
   System::Console::WriteLine(o);  
}   
```  
  
 **Output**  
  
```Output  
no automatic conversion to int: b  
  
convert to int: 1  
  
1  
  
1  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)