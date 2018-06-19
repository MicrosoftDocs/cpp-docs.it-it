---
title: Ellissi e modelli Variadic | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: f20967d9-c967-4fd2-b902-2bb1d5ed87e3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2eddd87660d996e0d726c4453e0eb732a5553b99
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32416658"
---
# <a name="ellipses-and-variadic-templates"></a>Ellissi e modelli variadic
In questo articolo viene illustrato come utilizzare i puntini di sospensione (`...`) con i modelli di variadic C++. I puntini di sospensione ha molti modi in C e C++. Sono inclusi elenchi di argomenti variabili per le funzioni. Il `printf()` funzione dalla libreria di Runtime C è uno degli esempi più noti.  
  
 Oggetto *modello variadic* è un modello di classe o una funzione che supporta un numero arbitrario di argomenti. Questo meccanismo è particolarmente utile per gli sviluppatori di librerie C++ perché è possibile applicarlo a modelli di classe e i modelli di funzione e in tal modo forniscono un'ampia gamma di funzionalità indipendente dai tipi e non semplice e flessibilità.  
  
## <a name="syntax"></a>Sintassi  
 I puntini di sospensione viene utilizzato in due modi dai modelli di variadic. A sinistra del nome del parametro, indica un *pacchetto parametri*, e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti.  
  
 Ecco un esempio di base di *classe modello variadic* sintassi di definizione:  
  
```cpp  
template<typename... Arguments> class classname;  
```  
  
 Per i pacchetti e le espansioni di parametri, è possibile aggiungere uno spazio attorno ai puntini di sospensione, in base alle preferenze, come illustrato negli esempi seguenti:  
  
```cpp  
template<typename ...Arguments> class classname;  
```  
  
 oppure:  
  
```cpp  
template<typename ... Arguments> class classname;  
```  
  
 Si noti che in questo articolo viene utilizzata la convenzione illustrata nel primo esempio (i puntini di sospensione sono associati a `typename`).  
  
 Nell'esempio precedente `Arguments` è un pacchetto di parametri. La classe `classname` può accettare un numero variabile di argomenti, come illustrato in questi esempi:  
  
```cpp  
template<typename... Arguments> class vtclass;  
  
vtclass< > vtinstance1;  
vtclass<int> vtinstance2;  
vtclass<float, bool> vtinstance3;  
vtclass<long, std::vector<int>, std::string> vtinstance4;  
  
```  
  
 Utilizzando una definizione di classe modello variadic, è inoltre possibile richiedere almeno un parametro:  
  
```cpp  
template <typename First, typename... Rest> class classname;  
  
```  
  
 Ecco un esempio di base di *funzione modello variadic* sintassi:  
  
```cpp  
template <typename... Arguments> returntype functionname(Arguments... args);  
```  
  
 Il `Arguments` pacchetto parametri viene quindi espansa per l'utilizzo, come illustrato nella sezione successiva, **informazioni sui modelli di variadic**.  
  
 Sono possibili altre forme di sintassi della funzione di modello variadic, inclusi, ma non limitata, in questi esempi:  
  
```cpp  
template <typename... Arguments> returntype functionname(Arguments&... args);   
template <typename... Arguments> returntype functionname(Arguments&&... args);  
template <typename... Arguments> returntype functionname(Arguments*... args);  
```  
  
 Ad esempio identificatori `const` sono inoltre consentiti:  
  
```cpp  
template <typename... Arguments> returntype functionname(const Arguments&... args);  
  
```  
  
 Come le definizioni di classi modello variadic, è possibile apportare le funzioni che richiedono almeno un parametro:  
  
```cpp  
template <typename First, typename... Rest> returntype functionname(const First& first, const Rest&... args);  
  
```  
  
 Utilizzano modelli Variadic il `sizeof...()` (operatore) (non correlati a versioni precedenti `sizeof()` (operatore)):  
  
```cpp  
template<typename... Arguments>  
void tfunc(const Arguments&... args)  
{  
    constexpr auto numargs{ sizeof...(Arguments) };  
  
    X xobj[numargs]; // array of some previously defined type X  
  
    helper_func(xobj, args...);  
}  
  
```  
  
## <a name="more-about-ellipsis-placement"></a>Ulteriori informazioni sulla posizione dei puntini di sospensione  
 In precedenza, in questo articolo viene descritto il posizionamento dei puntini di sospensione che definisce i pacchetti e espansioni di parametri con il significato seguente: "a sinistra del nome del parametro indica un pacchetto di parametro e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti". Questo è tecnicamente vero, ma può confondere nella conversione in codice. Tenere presente quanto segue:  
  
-   In un elenco di parametri di modello (`template <parameter-list>`), `typename...` introduce un pacchetto di parametri di modello.  
  
-   In una clausola di dichiarazione di parametro (`func(parameter-list)`), un puntini di sospensione "principale" introduce un pacchetto di parametri di funzione e il posizionamento di puntini di sospensione è importante:  
  
    ```cpp  
    // v1 is NOT a function parameter pack:  
    template <typename... Types> void func1(std::vector<Types...> v1);   
  
    // v2 IS a function parameter pack:  
    template <typename... Types> void func2(std::vector<Types>... v2);   
    ```  
  
-   Quando i puntini di sospensione sono presenti subito dopo un nome di parametro, si ottiene un'espansione del pacchetto di parametri.  
  
## <a name="example"></a>Esempio  
 È un buon metodo per illustrare il meccanismo di funzione di modello variadic uso di alcune delle funzionalità di riscrittura `printf`:  
  
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
  
## <a name="output"></a>Output  
  
```  
  
1  
10, 20  
100, 200, 300  
first, 2, third, 3.14159  
```  
  
> [!NOTE]
>  Usare la maggior parte delle implementazioni che incorporano le funzioni modello variadic ricorsione qualche forma di, ma è leggermente diversa rispetto alla ricorsione tradizionale.  Ricorsione tradizionale implica una funzione chiama se stesso tramite la stessa firma. (Potrebbe essere sovraccarico o basato su modelli, ma la stessa firma viene scelto ogni volta). Ricorsione Variadic implica la chiamata di un modello di funzione variadic utilizzando diversi numeri (quasi sempre decrescente) di argomenti e l'indicazione in tal modo out una firma diversa ogni volta. Un "case di base" è ancora necessaria, ma la natura della ricorsione è diversa.  
  
