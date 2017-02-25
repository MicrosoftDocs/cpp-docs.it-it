---
title: "Classe function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "functional/std::tr1::function"
  - "std.tr1.function"
  - "std::tr1::function"
  - "function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "function (classe) [TR1]"
ms.assetid: 7b5ca76b-9ca3-4d89-8fcf-cad70a4aeae6
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 26
---
# Classe function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Wrapper per un oggetto che può essere chiamato.  
  
## Sintassi  
  
```cpp  
template<class Fty>  
   class function  // Fty of type Ret(T1, T2, ..., TN)  
   : public unary_function<T1, Ret>       // when Fty is Ret(T1)  
   : public binary_function<T1, T2, Ret>  // when Fty is Ret(T1, T2)  
   {  
public:  
   typedef Ret result_type;  
  
   function();  
   function(nullptr_t);  
   function(const function& _Right);  
   template<class Fty2>  
      function(Fty2 fn);  
   template<class Fty2, class Alloc>  
       function (reference_wrapper<Fty2>, const Alloc& _Ax);  
   template<class Fty2, class Alloc>  
       void assign (Fty2, const Alloc& _Ax);  
   template<class Fty2, class Alloc>  
       assign (reference_wrapper<Fty2>, const Alloc& _Ax);  
```  
  
```cpp  
function& operator=(nullptr_t);  
function& operator=(const function&);  
template<class Fty2>  
   function& operator=(Fty2);  
template<class Fty2>  
   function& operator=(reference_wrapper<Fty2>);  
void swap(function&);  
  
explicit operator bool() const;  
result_type operator()(T1, T2, ....., TN) const;  
  
const std::type_info& target_type() const;  
template<class Fty2>  
   Fty2 *target();  
template<class Fty2>  
   const Fty2 *target() const;  
```  
  
```cpp  
   template<class Fty2>  
      void operator==(const Fty2&) const = delete;  
   template<class Fty2>  
      void operator!=(const Fty2&) const = delete;  
};  
```  
  
#### Parametri  
 `Fty`  
 Il tipo di funzione di cui eseguire il wrapping.  
  
 `_Ax`  
 La funzione di allocatore.  
  
## Note  
 La classe modello è un wrapper di chiamata della cui firma di chiamata è `Ret(T1, T2, ..., TN)`.  La utilizzate per includere numerosi oggetti in un runtime callable wrapper uniforme.  
  
 Alcune funzioni membro accettano un operando che indica l'oggetto di destinazione desiderato.  È possibile specificare tale operando in diversi modi:  
  
 `fn` \-\- l'oggetto essere chiamato `fn`; dopo la chiamata l'oggetto di `function` utilizza una copia di `fn`  
  
 `fnref` \-\- l'oggetto denominato essere chiamato da `fnref.get()`; dopo la chiamata l'oggetto di `function` mantiene un riferimento a `fnref.get()`  
  
 `right` \-\- l'oggetto richiamabile, se presente, utilizzato dall'oggetto `right`di `function`  
  
 `npc` \-\- un puntatore null; dopo la chiamata l'oggetto di `function` è vuoto  
  
 In tutti i casi, `INVOKE(f, t1, t2, ..., tN)`, dove `f` è l'oggetto chiamabile e `t1, t2, ..., tN` è lvalue dei tipi `T1, T2, ..., TN` rispettivamente, deve essere corretto e, se `Ret` non è void, convertibile in `Ret`.  
  
 Un oggetto vuoto di `function` non utilizza un oggetto chiamabile o un riferimento a un oggetto che può essere chiamato.  
  
### Costruttori  
  
|||  
|-|-|  
|[function::function](../Topic/function::function.md)|Costruisce un wrapper che è vuoto o archivia un oggetto chiamabile di tipo arbitrario con una firma fissa.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[function::result\_type](../Topic/function::result_type.md)|Il tipo restituito dell'oggetto chiamabile archiviato.|  
  
### Funzioni del membro  
  
|||  
|-|-|  
|[function::assign](../Topic/function::assign.md)|Assegna un oggetto chiamabile a questo oggetto funzione.|  
|[function::swap](../Topic/function::swap.md)|Questi due oggetti che possono essere chiamate.|  
|[function::target](../Topic/function::target.md)|Verifica se l'oggetto chiamabile archiviato può essere chiamato come specificato.|  
|[function::target\_type](../Topic/function::target_type.md)|Ottiene le informazioni sul tipo sull'oggetto \(securitysafecritical.|  
  
### Operatori  
  
|||  
|-|-|  
|[function::operator unspecified](../Topic/function::operator%20unspecified.md)|Verifica se l'oggetto chiamabile archiviato esistente.|  
|[function::operator\(\)](../Topic/function::operator\(\).md)|Chiama un oggetto che può essere chiamato.|  
|[function::operator\=](../Topic/function::operator=.md)|Sostituisce l'oggetto chiamabile archiviato.|  
  
## Requisiti  
 **Intestazione:** \<funzionale\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Funzione mem\_fn](../Topic/mem_fn%20Function.md)   
 [Classe reference\_wrapper](../standard-library/reference-wrapper-class.md)