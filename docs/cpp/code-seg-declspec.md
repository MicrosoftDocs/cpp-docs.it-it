---
title: "code_seg (__declspec) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "code_seg_cpp"
  - "code_seg"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "code_seg __declspec (parola chiave)"
ms.assetid: ad3c1105-15d3-4e08-b7b9-e4bd9d7b6aa0
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# code_seg (__declspec)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'attributo di dichiarazione `code_seg` assegna un nome a un segmento di testo eseguibile nel file OBJ in cui verrà archiviato il codice oggetto per la funzione o le funzioni membro della classe.  
  
## Sintassi  
  
```  
__declspec(code_seg("segname")) declarator  
```  
  
## Note  
 L'attributo `__declspec(code_seg(...))` consente il posizionamento del codice in segmenti denominati separati di cui è possibile eseguire singolarmente il paging o il blocco in memoria.  È possibile usare questo attributo per controllare il posizionamento dei modelli di cui sono state create istanze e del codice generato dal compilatore.  
  
 Un *segmento* è un blocco di dati denominato in un file OBJ caricato in memoria come unità.  Un *segmento di testo* è un segmento contenente codice eseguibile.  Il termine *sezione* viene spesso utilizzato intercambiabilmente con il termine segmento.  
  
 Il codice oggetto generato quando viene definito `declarator` viene inserito nel segmento di testo specificato da `segname`, ovvero un valore letterale stringa "narrow".  Il nome `segname` non deve essere specificato in un pragma [sezione](../preprocessor/section.md) prima che possa essere utilizzato in una dichiarazione.  Per impostazione predefinita, quando non viene specificato alcun `code_seg`, il codice oggetto viene inserito in un segmento denominato .text.  Un attributo `code_seg` esegue l'override di qualsiasi direttiva [\#pragma code\_seg](../preprocessor/code-seg.md) esistente.  Un attributo `code_seg` applicato a una funzione membro esegue l'override di qualsiasi attributo `code_seg` applicato alla classe che lo contiene.  
  
 Se un'entità dispone di un attributo `code_seg`, tutte le dichiarazioni e le definizioni della stessa entità devono disporre di attributi `code_seg` identici.  Se una classe base dispone di un attributo `code_seg`, le classi derivate devono disporre dello stesso attributo.  
  
 Quando un attributo `code_seg` viene applicato a una funzione con ambito spazio dei nomi o a una funzione membro, il codice oggetto per tale funzione viene inserito nel segmento di testo specificato.  Quando questo attributo viene applicato a una classe, tutte le funzioni membro della classe e delle classi annidate, incluse le funzioni membro speciali generate dal compilatore, vengono inserite nel segmento specificato.  Le classi definite localmente, ad esempio le classi definite nel corpo di una funzione membro, non ereditano l'attributo `code_seg` dell'ambito che lo contiene.  
  
 Quando un attributo `code_seg` viene applicato a una funzione modello o a una classe modello, tutte le specializzazioni implicite del modello vengono inserite nel segmento specificato.  Le specializzazioni esplicite o parziali non ereditano l'attributo `code_seg` dal modello principale.  È possibile specificare lo stesso attributo `code_seg` o uno diverso nella specializzazione.  Un attributo `code_seg` non può essere applicato alla creazione esplicita di istanze di modelli.  
  
 Per impostazione predefinita, il codice generato dal compilatore, ad esempio una funzione membro speciale, viene inserito nel segmento .text.  La direttiva `#pragma code_seg` non esegue l'override di questa impostazione predefinita.  Usare l'attributo `code_seg` sulla classe, sul modello di classe o su un modello di funzione per controllare il posizionamento del codice generato dal compilatore.  
  
 Le espressioni lambda ereditano attributi `code_seg` dall'ambito che le contiene.  Per specificare un segmento per un'espressione lambda, applicare un attributo `code_seg` dopo la clausola di dichiarazione parametro e prima di qualsiasi specifica di eccezione o elemento modificabile, di qualsiasi specifica del tipo restituito finale e del corpo dell'espressione lambda.  Per altre informazioni, vedere [Sintassi delle espressioni lambda](../cpp/lambda-expression-syntax.md).  In questo esempio viene definita un'espressione lambda in un segmento denominato PagedMem:  
  
```cpp  
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };  
```  
  
 Prestare attenzione nell'inserire funzioni membro specifiche, in particolare funzioni membro virtuali, in segmenti diversi.  Se si definisce una funzione virtuale in una classe derivata che risiede in un segmento di paging quando il metodo della classe base si trova in un segmento non di paging, gli altri metodi della classe base o il codice utente potrebbe presumere che l'azione di richiamare il metodo virtuale non comporta alcun errore di pagina.  
  
## Esempio  
 In questo esempio viene mostrato come un attributo `code_seg` controlla il posizionamento del segmento quando si usa la specializzazione esplicita del modello:  
  
```  
// code_seg.cpp  
// Compile: cl /EHsc /W4 code_seg.cpp  
  
// Base template places object code in Segment_1 segment  
template<class T>  
class __declspec(code_seg("Segment_1")) Example  
{  
public:  
   virtual void VirtualMemberFunction(T /*arg*/) {}  
};  
  
// bool specialization places code in default .text segment  
template<>  
class Example<bool>   
{  
public:  
   virtual void VirtualMemberFunction(bool /*arg*/) {}  
};  
  
// int specialization places code in Segment_2 segment  
template<>  
class __declspec(code_seg("Segment_2")) Example<int>   
{  
public:  
   virtual void VirtualMemberFunction(int /*arg*/) {}  
};  
  
// Compiler warns and ignores __declspec(code_seg("Segment_3"))  
// in this explicit specialization  
__declspec(code_seg("Segment_3")) Example<short>; // C4071  
  
int main()  
{  
   // implicit double specialization uses base template's  
   // __declspec(code_seg("Segment_1")) to place object code  
   Example<double> doubleExample{};  
   doubleExample.VirtualMemberFunction(3.14L);  
  
   // bool specialization places object code in default .text segment  
   Example<bool> boolExample{};  
   boolExample.VirtualMemberFunction(true);  
  
   // int specialization uses __declspec(code_seg("Segment_2"))  
   // to place object code  
   Example<int> intExample{};  
   intExample.VirtualMemberFunction(42);  
}  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)