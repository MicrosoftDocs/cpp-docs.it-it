---
title: "String  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "string support with /clr"
  - "/clr compiler option [C++], string support"
ms.assetid: c695f965-9be0-4e20-9661-373bfee6557e
caps.latest.revision: 19
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# String  (C++ Component Extensions)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore di Visual C\+\+ supporta *stringhe*, che sono oggetti che rappresentano il testo come una sequenza di caratteri.  Visual C\+\+ supporta le variabili di tipo stringa, il cui valore è implicito, e valori letterali, il cui valore è una stringa tra virgolette esplicita.  
  
## Tutti i runtime  
 Il Windows Runtime ed il Common Language Runtime rappresentano le stringhe come oggetti in cui la memoria allocata viene gestita automaticamente.  Ovvero, non viene richiesto in modo esplicito di rimuovere la memoria per una stringa quando la variabile di tipo stringa esce dall'area di validità o l'applicazione termina.  Per indicare che la durata di un oggetto di tipo stringa deve essere gestita automaticamente, dichiarare il tipo stringa con il modificatore [handle per l'oggetto \(^\)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md).  
  
## Windows Runtime  
 L'architettura di Windows Runtime richiede Visual C\+\+ per implementare il tipo di dati `String` nello spazio dei nomi `Platform`.  Per comodità, Visual C\+\+ fornisce anche il tipo di dati `string`, un sinonimo di `Platform::String`, nello spazio dei nomi `default`.  
  
### Sintassi  
  
```cpp  
  
// compile with /ZW  
using namespace Platform;  
using namespace default;  
   Platform::String^ MyString1 = "The quick brown fox";  
   String^ MyString2 = "jumped over the lazy dog.";  
   String^ MyString3 = "Hello, world!";  
  
```  
  
### Note  
 Per ulteriori informazioni ed esempi riguardanti le stringhe, vedere [Platform::String, std::wstring, and Literals \(Platform\)](http://msdn.microsoft.com/it-it/ec92fbc6-edf3-4137-a85e-8e29bdb857a8).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 In questo argomento viene illustrato come il compilatore di Visual C\+\+ elabora i valori letterali stringa quando viene eseguito utilizzando l'opzione del compilatore **\/clr**.  Per utilizzare **\/clr**, è necessario utilizzare anche il Common Language Runtime \(CLR\), la sintassi C\+\+\/CLI e gli oggetti gestiti.  Per ulteriori informazioni su **\/clr**, vedere [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md).  
  
 Durante la compilazione con **\/clr**, il compilatore convertirà i valori letterali stringa in una stringa di tipo <xref:System.String>.  Per preservare la compatibilità con il codice esistente, sono presenti due eccezioni:  
  
-   Gestione delle eccezioni.  Quando un valore letterale stringa viene generato, il compilatore lo rileverà come un valore letterale stringa.  
  
-   Deduzione del modello.  Quando un valore letterale stringa viene passato come un argomento di modello, il compilatore non lo convertirà in <xref:System.String>.  Nota, i valori letterali stringa passati come un argomento generico saranno promossi a <xref:System.String>.  
  
 Il compilatore dispone anche di un supporto incorporato per tre operatori, in cui è possibile eseguire l'override per personalizzarne il comportamento:  
  
-   System::String ^ operator \+\( System::String, System::String\);  
  
-   System::String ^ operator \+\( System::Object, System::String\);  
  
-   System::String ^ operator \+\( System::String, System::Object\);  
  
 Una volta passato un oggetto <xref:System.String>, il compilatore lo inscatolerà, se necessario, quindi concatena l'oggetto \(con ToString\) con la stringa.  
  
 Durante la compilazione con **\/clr:oldSyntax**, i valori letterali stringa non saranno convertiti in <xref:System.String>.  
  
> [!NOTE]
>  L'accento circonflesso \("^"\) indica che la variabile dichiarata è un handle per un oggetto C\+\+\/CLI gestito.  
  
 Per ulteriori informazioni, vedere [Stringa e valori letterali carattere](../cpp/string-and-character-literals-cpp.md).  
  
### Requisiti  
 Opzione del compilatore: **\/clr**  
  
### Esempi  
 **Esempio**  
  
 Nell'esempio di codice seguente viene illustrata la concatenazione ed il confronto di stringhe.  
  
```cpp  
// string_operators.cpp  
// compile with: /clr  
// In the following code, the caret ("^") indicates that the   
// declared variable is a handle to a C++/CLI managed object.  
using namespace System;  
  
int main() {  
   String ^ a = gcnew String("abc");  
   String ^ b = "def";   // same as gcnew form  
   Object ^ c = gcnew String("ghi");  
  
   char d[100] = "abc";  
  
   // variables of System::String returning a System::String  
   Console::WriteLine(a + b);  
   Console::WriteLine(a + c);  
   Console::WriteLine(c + a);  
  
   // accessing a character in the string  
   Console::WriteLine(a[2]);  
  
   // concatenation of three System::Strings  
   Console::WriteLine(a + b + c);  
  
   // concatenation of a System::String and string literal  
   Console::WriteLine(a + "zzz");  
  
   // you can append to a System::String ^  
   Console::WriteLine(a + 1);  
   Console::WriteLine(a + 'a');  
   Console::WriteLine(a + 3.1);  
  
   // test System::String ^ for equality  
   a += b;  
   Console::WriteLine(a);  
   a = b;  
   if (a == b)  
      Console::WriteLine("a and b are equal");  
  
   a = "abc";  
   if (a != b)  
      Console::WriteLine("a and b are not equal");  
  
   // System:String ^ and tracking reference  
   String^% rstr1 = a;  
   Console::WriteLine(rstr1);  
  
   // testing an empty System::String ^  
   String ^ n;  
   if (n == nullptr)  
      Console::WriteLine("n is empty");  
}  
```  
  
 **Output**  
  
  **abcdef**  
 **abcghi**  
 **ghiabc**  
 **c**  
 **abcdefghi**  
 **abczzz**  
 **abc1**  
 **abc97**  
 **abc3.1**  
 **abcdef**  
 **a and b are equal**  
 **a and b are not equal**  
 **abc**  
 **n is empty** **Esempio**  
  
 Nell'esempio seguente viene mostrato che è possibile eseguire l'overload degli operatori forniti dal compilatore e che il compilatore cercherà un overload della funzione basata sul tipo <xref:System.String>.  
  
```cpp  
// string_operators_2.cpp  
// compile with: /clr  
using namespace System;  
  
// a string^ overload will be favored when calling with a String  
void Test_Overload(const char * a) {   
   Console::WriteLine("const char * a");   
}  
void Test_Overload(String ^ a) {   
   Console::WriteLine("String ^ a");   
}  
  
// overload will be called instead of compiler defined operator  
String ^ operator +(String ^ a, String ^ b) {  
   return ("overloaded +(String ^ a, String ^ b)");  
}  
  
// overload will be called instead of compiler defined operator  
String ^ operator +(Object ^ a, String ^ b) {  
   return ("overloaded +(Object ^ a, String ^ b)");  
}  
  
// overload will be called instead of compiler defined operator  
String ^ operator +(String ^ a, Object ^ b) {  
   return ("overloaded +(String ^ a, Object ^ b)");  
}  
  
int main() {  
   String ^ a = gcnew String("abc");  
   String ^ b = "def";   // same as gcnew form  
   Object ^ c = gcnew String("ghi");  
  
   char d[100] = "abc";  
  
   Console::WriteLine(a + b);  
   Console::WriteLine(a + c);  
   Console::WriteLine(c + a);  
  
   Test_Overload("hello");  
   Test_Overload(d);  
}  
```  
  
 **Output**  
  
  **overloaded \+\(String ^ a, String ^ b\)**   
 **overloaded \+\(String ^ a, Object ^ b\)**   
 **overloaded \+\(Object ^ a, String ^ b\)**   
 **String ^ a**  
 **const char \* a** **Esempio**  
  
 Nell'esempio seguente viene mostrato che il compilatore fa distinzione tra stringhe native e le stringhe <xref:System.String>.  
  
```cpp  
// string_operators_3.cpp  
// compile with: /clr  
using namespace System;  
int func() {  
   throw "simple string";   // const char *  
};  
  
int func2() {  
   throw "string" + "string";   // returns System::String  
};  
  
template<typename T>  
void func3(T t) {  
   Console::WriteLine(T::typeid);  
}  
  
int main() {  
   try {  
      func();  
   }  
   catch(char * e) {  
      Console::WriteLine("char *");  
   }  
  
   try {  
      func2();  
   }  
   catch(String^ str) {  
      Console::WriteLine("String^ str");  
   }  
  
   func3("string");   // const char *  
   func3("string" + "string");   // returns System::String  
}  
```  
  
 **Output**  
  
  **char\***  
 **String^ str**  
 **System.SByte\***  
 **System.String**   
## Vedere anche  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Stringa e valori letterali carattere](../cpp/string-and-character-literals-cpp.md)   
 [\/clr \(Compilazione Common Language Runtime\)](../build/reference/clr-common-language-runtime-compilation.md)