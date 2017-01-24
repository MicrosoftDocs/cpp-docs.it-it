---
title: "Ellissi e modelli variadic | Microsoft Docs"
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
ms.assetid: f20967d9-c967-4fd2-b902-2bb1d5ed87e3
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ellissi e modelli variadic
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come utilizzare i puntini di sospensione \(`...`\) con i modelli variadic di C\+\+.  I puntini di sospensione hanno avuto [molti usi](../misc/ellipsis-dot-dot-dot.md) in C e C\+\+.  Sono inclusi gli elenchi di argomenti variabili per le funzioni.  La funzione `printf()` dalla Libreria di runtime C è uno degli esempi più noti.  
  
 Un *modello variadic* è una classe o un modello di funzione che supporta un numero arbitrario di argomenti.  Questo meccanismo è particolarmente utile per gli sviluppatori di librerie C\+\+ perché può essere applicato sia ai modelli di classe che di funzione e offre quindi flessibilità e una vasta gamma di funzionalità complesse e indipendenti dai tipi.  
  
## Sintassi  
 I puntini di sospensione vengono utilizzati in due modi da diversi modelli variadic.  A sinistra del nome del parametro indica un *pacchetto di parametri*, mentre a destra del nome del parametro espande i pacchetti di parametri in nomi distinti.  
  
 Di seguito è riportato un esempio di base della sintassi di definizione della *classe modello variadic*:  
  
```cpp  
template<typename... Arguments> class classname;  
```  
  
 Per i pacchetti di parametri e per le espansioni, è possibile aggiungere lo spazio vuoto attorno ai puntini di sospensione, in base alla preferenza, come illustrato negli esempi seguenti:  
  
```cpp  
template<typename ...Arguments> class classname;  
```  
  
 Oppure:  
  
```cpp  
template<typename ... Arguments> class classname;  
```  
  
 Si noti che questo articolo utilizza la convenzione illustrata nel primo esempio \(i puntini di sospensione sono associati a `typename`\).  
  
 Nell'esempio precedente, `Arguments` è un pacchetto di parametri.  Il `classname` della classe può accettare un numero variabile di argomenti, come negli esempi seguenti:  
  
```cpp  
  
template<typename... Arguments> class vtclass;  
  
vtclass< > vtinstance1;  
vtclass<int> vtinstance2;  
vtclass<float, bool> vtinstance3;  
vtclass<long, std::vector<int>, std::string> vtinstance4;  
  
```  
  
 Utilizzando una definizione delle classi modello variadic, è anche possibile richiedere almeno un parametro:  
  
```cpp  
template <typename First, typename... Rest> class classname;  
  
```  
  
 Di seguito è riportato un esempio di base della sintassi della *funzione modello variadic*:  
  
```cpp  
template <typename... Arguments> returntype functionname(Arguments... args);  
```  
  
 Il pacchetto di parametri `Arguments` viene quindi espanso per l'utilizzo, come illustrato nella sezione successiva, **Informazioni sui modelli variadic**.  
  
 sono possibili altre forme di sintassi variadic della funzione di modello, inclusi, a titolo esemplificativo, questi esempi:  
  
```cpp  
template <typename... Arguments> returntype functionname(Arguments&... args);   
template <typename... Arguments> returntype functionname(Arguments&&... args);  
template <typename... Arguments> returntype functionname(Arguments*... args);  
```  
  
 Anche gli identificatori come `const` sono consentiti:  
  
```cpp  
template <typename... Arguments> returntype functionname(const Arguments&... args);  
  
```  
  
 Analogamente alle definizioni delle classi modello variadic, è possibile creare funzioni che richiedono almeno un parametro:  
  
```cpp  
template <typename First, typename... Rest> returntype functionname(const First& first, const Rest&... args);  
  
```  
  
 I modelli variadic utilizzano l'operatore `sizeof...()` \(non correlato all'operatore `sizeof()` precedente\):  
  
```cpp  
template<typename... Arguments>  
void tfunc(const Arguments&... args)  
{  
    const unsigned numargs = sizeof...(Arguments);  
  
    X xobj[numargs]; // array of some previously defined type X  
  
    helper_func(xobj, args...);  
}  
  
```  
  
## Ulteriori informazioni sulla posizione dei puntini di sospensione  
 In precedenza, in questo articolo viene descritto il posizionamento dei puntini di sospensione che definisce i pacchetti e espansioni di parametro come "a sinistra del nome del parametro, indica un pacchetto di parametro e a destra del nome del parametro, espande i pacchetti di parametri nei nomi distinti".  Questo è tecnicamente vero, ma può confondere nella conversione in codice.  Tenere presente quanto segue:  
  
-   In un modello di elenco di parametri \(`template <parameter-list>`\), `typename...` introduce un pacchetto di parametro di modello.  
  
-   In una clausola di dichiarazione parametro \(`func(parameter-list)`\), i puntini di sospensione "di livello superiore" introducono un pacchetto di parametro della funzione e il posizionamento delle ellissi è importante:  
  
    ```cpp  
  
    // v1 is NOT a function parameter pack:  
    template <typename... Types> void func1(std::vector<Types...> v1);   
  
    // v2 IS a function parameter pack:  
    template <typename... Types> void func2(std::vector<Types>... v2);   
    ```  
  
-   Dove i puntini di sospensione appaiono subito dopo un nome di parametro, si ottiene un'espansione del pacchetto di parametro.  
  
## Esempio  
 Un modo efficace per illustrare il meccanismo variadic della funzione di modello è utilizzarlo nella riscrittura di alcune funzionalità `printf`:  
  
```cpp  
#include <iostream>  
  
using namespace std;  
  
void print() {  
    cout << endl;  
}  
  
template <typename T> void print(const T& t) {  
    cout << t << endl;  
}  
  
template <typename First, typename... Rest> void print(const First& first, const Rest&... rest) {  
    cout << first << ", ";  
    print(rest...); // recursive call using pack expansion syntax  
}  
  
int main()  
{  
    print(); // calls first overload, outputting only a newline  
    print(1); // calls second overload  
  
    // these call the third overload, the variadic template,   
    // which uses recursion as needed.  
    print(10, 20);  
    print(100, 200, 300);  
    print("first", 2, "third", 3.14159);  
}  
  
```  
  
## Output  
  
```  
  
1  
10, 20  
100, 200, 300  
first, 2, third, 3.14159  
```  
  
> [!NOTE]
>  La maggior parte delle implementazioni che includono funzioni variadic del modello utilizzano la ricorsione del form, ma è leggermente diversa dalla ricorsione tradizionale. La ricorsione tradizionale include una funzione che chiama se stessa utilizzando la stessa firma. \(Può essere sottoposta a overload o basata su modelli, ma ogni volta viene scelta la stessa firma\). La ricorsione variadic prevede la chiamata di un modello di funzione variadic utilizzando numeri di argomenti diversi \(quasi sempre decrescenti\) e quindi scegliendo una firma diversa ogni volta.  "Un caso di base" è comunque necessario, ma la natura della ricorsione è differente.  
  
## Vedere anche  
 [Puntini di sospensione \(...\)](../misc/ellipsis-dot-dot-dot.md)